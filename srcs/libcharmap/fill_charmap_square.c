/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_charmap_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:53:18 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 19:37:15 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcharmap.h"

int	fill_charmap_square(t_coords *coords, t_map *map, char **charmap)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < coords->area)
	{
		j = 0;
		while (j < coords->area)
		{
			charmap[coords->i - i][coords->j - j] = map->filled;
			++j;
		}
		++i;
	}
	return (OK);
}
