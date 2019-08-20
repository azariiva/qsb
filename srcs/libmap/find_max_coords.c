/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_coords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:18:51 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 21:21:37 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

void	find_max_coords(t_coords *coords, t_map *map, size_t height)
{
	size_t	i;

	i = 0;
	while (i < map->length)
	{
		if (map->curr_line[i] > coords->area)
		{
			coords->area = map->curr_line[i] * map->curr_line[i];
			coords->i = i;
			coords->j = height;
		}
		++i;
	}
}
