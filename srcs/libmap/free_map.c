/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaple <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 22:15:21 by rmaple            #+#    #+#             */
/*   Updated: 2019/08/20 12:50:49 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

void	free_map(t_map *map, size_t real_height)
{
	size_t	i;

	i = 0;
	while (i < real_height)
		free(map->body[i]);
	free(map->body);
	free(map);
}
