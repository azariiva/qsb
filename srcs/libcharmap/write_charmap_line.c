/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_charmap_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:49:53 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 15:14:00 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcharmap.h"

void	write_charmap_line(t_map *map, char **charmap, size_t height)
{
	size_t	i;

	i = 0;
	while (i < map->length)
	{
		charmap[height][i] = (map->curr_line[i] != 0 ? map->empty : \
				map->obstacle);
		++i;
	}
}
