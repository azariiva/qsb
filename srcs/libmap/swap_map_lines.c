/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_map_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:55:48 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 21:22:11 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

void	swap_map_lines(t_map *map)
{
	size_t	*tmp;

	tmp = map->prev_line;
	map->prev_line = map->curr_line;
	map->curr_line = tmp;
}
