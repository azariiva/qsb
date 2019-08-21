/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:53:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 19:26:28 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcharmap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int			stream;
	int			i;
	t_map		*map;
	t_coords	*coords;

	if (!(map = (t_map *)malloc(sizeof(t_map))) || \
			!(coords = (t_coords *)malloc(sizeof(t_coords))))
	{
		ft_puterr(ALLERR);
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (++i < argc)
	{
		if ((stream = open(argv[i], O_RDONLY)) <= 0)
			ft_puterr(FILERR);
		else
		{
			ft_puterr(process_input(stream, map, coords));
			close(stream);
		}
		if (i != argc - 1)
			ft_putchar(STDOUT, '\n');
	}
	free(map);
	free(coords);
	exit(EXIT_SUCCESS);
}
