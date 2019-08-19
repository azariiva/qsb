/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:47:51 by fhilary           #+#    #+#             */
/*   Updated: 2019/08/19 21:43:34 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

t_map	*get_map(int *stream, char *filename)
{
	t_map	*map;
	int		i;

	map = (t_map *)malloc(sizeof(t_map));
	i = 0;
	if (get_map_height_eof(*stream, map) != OK || \
			get_map_length(stream, map, filename) != OK)
		return (NULL);
	map->body = (char **)malloc(sizeof(char *) * map->height);
	while (i < map->height)
		map->body[i++] = (char *)malloc(sizeof(char) * map->length);
	if (get_map_body(*stream, map) == ERR)
		return (NULL);
	if (ft_getchar(*stream) != 0)
		return (NULL);
	return (map);
}
