/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:53:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 15:18:27 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcharmap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list		*head;
	int			stream;
	int			i;
	t_map		*map;
	t_coords	*coords;
	int			errcode;
	char		**charmap;
	size_t		j;

	map = (t_map *)malloc(sizeof(t_map));
	i = 1;
	while (i < argc)
	{
		if ((stream = open(argv[i], O_RDONLY)) <= 0)
			errcode = FILERR;
		else if ((errcode = get_map_height_eof(stream, map)) || \
				(errcode = get_map_first_line(stream, map)))
			;
		else if (!(charmap = create_charmap(map)))
			errcode = ALLERR;
		else if (!(errcode = create_coords(&coords)))
		{
			j = 1;
			write_charmap_line(map, charmap, 0);
			find_max_coords(coords, map, 0);
			while (j < map->height)
			{
				swap_map_lines(map);
				if ((errcode = get_map_line(stream, map)))
					break;
				write_charmap_line(map, charmap, j);
				find_max_coords(coords, map, j);
				++j;
			}
			if (!errcode)
			{
				fill_charmap_square(coords, map, charmap);
				print_charmap(map, charmap);
			}
			free_charmap(charmap, map->height);
			free(coords);
			free_map(map);
		}
		ft_puterr(errcode);
		close(stream);
		++i;
	}
	return (0);
}
