/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_cell.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:03:54 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 21:22:29 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

void	get_map_cell(t_map *map, size_t i)
{
	map->curr_line[i] = MIN(MIN(map->curr_line[i - 1], map->prev_line[i]), \
			map->prev_line[i - 1]) + 1;
}
