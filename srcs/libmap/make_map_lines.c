/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_map_lines.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 20:27:31 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 20:30:44 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	make_map_lines(t_map *map)
{
	if (!(map->prev_line = (size_t *)malloc(map->length * sizeof(size_t))) || \
			!(map->curr_line = (size_t *)malloc(map->length * sizeof(size_t))))
	{
		free(map->prev_line);
		return (ALLERR);
	}
	return (OK);
}
