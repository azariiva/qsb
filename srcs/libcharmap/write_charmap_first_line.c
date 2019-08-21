/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_charmap_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:49:53 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 16:07:06 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcharmap.h"

void	write_charmap_first_line(t_map *map, char **charmap)
{
	size_t	i;

	i = 0;
	while (i < map->length)
	{
		charmap[0][i] = (map->curr_line[i] != 0 ? map->empty : \
				map->obstacle);
		++i;
	}
}
