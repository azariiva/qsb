/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_height_eof.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhitmonc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:00:01 by lhitmonc          #+#    #+#             */
/*   Updated: 2019/08/19 18:54:25 by lhitmonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

#define IS_CORRECT(c) (c && c != '\n')

int	get_map_height_eof(int stream, t_map *map)
{
	char	c;
	int		key;

	key = ERR;
	map->height = 0;
	while ((c = ft_getchar(stream)) && c >= '0' && c <= '9')
	{
		if ((c < '0' || c > '9') && key == READERR)
			return (ERR);
		key = OK;
		map->height = map->height * 10 + buffer - '0';
	}
	if (!IS_CORRECT(map->empty = c) || !IS_CORRECT(map->obstacle = \
				ft_getchar(stream)) || !IS_CORRECT(map->filled = \
				ft_getchar(stream)) || ft_getchar(stream) != '\n')
		key = ERR;
	return (key);
}
