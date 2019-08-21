/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_map_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:55:48 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 16:46:45 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	swap_map_lines(t_map *map)
{
	size_t	*tmp;

	tmp = map->prev_line;
	map->prev_line = map->curr_line;
	map->curr_line = tmp;
	return (OK);
}
