/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:14:06 by fhilary           #+#    #+#             */
/*   Updated: 2019/08/19 21:05:33 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int		get_map_length(int *stream, t_map *map, char *filename)
{
	char	c;

	map->length = 0;
	while ((c = ft_getchar(*stream)) != '\n')
	{
		if (c != map->empty && c != map->obstacle)
			return (ERR);
		map->length++;
	}
	close(*stream);
	*stream = open(filename, O_RDONLY);
	while (ft_getchar(*stream) != '\n')
		;
	return (OK);
}
