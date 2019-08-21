/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_coords.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:18:51 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 17:01:22 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	find_max_coords(t_coords *coords, t_map *map, size_t height)
{
	size_t	i;

	i = 0;
	while (i < map->length)
	{
		if (map->curr_line[i] > coords->area)
		{
			coords->area = map->curr_line[i];
			coords->i = height;
			coords->j = i;
		}
		++i;
	}
	return (OK);
}
