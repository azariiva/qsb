/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:14:06 by fhilary           #+#    #+#             */
/*   Updated: 2019/08/19 20:21:08 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int		get_map_length(int *stream, t_map *map, char *filename)
{
	char	c;

	map->length = 0;
	while ((c = getchar(*stream)) != '\n')
	{
		if (c != map->empty && c != map->obstacle)
			return (ERR);
		map->length++;
	}
	close(*stream);
	*stream = open(filename, O_RDONLY);
	while (getchar(*stream) != '\n')
		;
	return (OK);
}
