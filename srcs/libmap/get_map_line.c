/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:52:08 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 17:24:58 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	get_map_line(int stream, t_map *map, char *line)
{
	size_t	i;
	char	c;

	if ((c = ft_getchar(stream)) == map->empty)
		map->curr_line[0] = 1;
	else if (c == map->obstacle)
		map->curr_line[0] = 0;
	else
		return (MAPERR);
	line[0] = c;
	i = 1;
	while (i < map->length)
	{
		if ((c = ft_getchar(stream)) == map->empty)
			get_map_cell(map, i);
		else if (c == map->obstacle)
			map->curr_line[i] = 0;
		else
			return (MAPERR);
		line[i++] = c;
	}
	if (ft_getchar(stream) != '\n')
		return (MAPERR);
	return (OK);
}
