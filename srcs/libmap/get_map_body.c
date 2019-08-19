/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_body.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 21:08:19 by fhilary           #+#    #+#             */
/*   Updated: 2019/08/19 21:27:24 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int		get_map_body(int stream, t_map *map)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->length)
		{
			if ((map->body[i][j] = ft_getchar(stream)) != map->empty && \
					map->body[i][j] != map->obstacle)
				return (ERR);
			++j;
		}
		if (ft_getchar(stream) != '\n')
			return (ERR);
		++i;
	}
	return (OK);
}
