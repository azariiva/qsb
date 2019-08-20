/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:53:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 22:11:01 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list		*head;
	int			stream;
	int			i;
	t_map		*map;
	t_coords	*coords;
	int			errcode;
	int			area;
	size_t		j;

	map = (t_map *)malloc(sizeof(t_map));
	i = 1;
	while (i < argc)
	{
		if ((stream = open(argv[i], O_RDONLY)) <= 0)
			ft_puterr(FILERR);
		else if ((errcode = get_map_height_eof(stream, map)) || \
				(errcode = get_map_first_line(stream, map)))
		{
			ft_puterr(errcode);
			close(stream);
		}
		else if (!(errcode = create_coords(&coords)))
		{
			j = 1;
			find_max_coords(coords, map, 0);
			find_max_coords(coords, map, j);
			while (j < map->height)
			{
				swap_map_lines(map);
				if ((errcode = get_map_line(stream, map)))
					break;
				find_max_coords(coords, map, j);
				++j;
			}
			if (!errcode)
				printf("%zu %zu %zu\n", coords->i, coords->j, coords->area);
			ft_puterr(errcode);
			free_map(map);
			close(stream);
		}
		else
		{
			ft_puterr(errcode);
			close(stream);
		}
		++i;
	}
	return (0);
}
