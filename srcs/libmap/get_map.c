/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:47:51 by fhilary           #+#    #+#             */
/*   Updated: 2019/08/19 20:02:52 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

t_map	*get_map(int stream)
{
	t_map	*map;
	int		i;

	map = NULL;
	i = 0;
	if (!(get_map_height_eof(stream, map) && \
				get_map_length(stream, map)))
		return (NULL);
	map->body = (t_map**)malloc(sizeof(t_map*) * map->height);
	while (i < map->height)
		map->body[i++] = (t_map*)malloc(sizeof(t_map) * map->length);
	if (!get_map_body(stream, map))
		return (NULL);
	return (map);
}
