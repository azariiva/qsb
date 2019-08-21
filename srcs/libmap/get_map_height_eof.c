/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_height_eof.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhitmonc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:00:01 by lhitmonc          #+#    #+#             */
/*   Updated: 2019/08/21 20:52:59 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	get_map_height_eof(int stream, t_map *map)
{
	char	c;
	int		key;

	key = MAPERR;
	map->height = 0;
	while ((c = ft_getchar(stream)) && c >= '0' && c <= '9')
	{
		key = OK;
		map->height = map->height * 10 + c - '0';
	}
	if (is_correct_sym(map->empty = c) || !map->height)
		key = MAPERR;
	else if (is_correct_sym(map->obstacle = ft_getchar(stream)) || \
			is_correct_sym((map->filled = ft_getchar(stream))) || \
			ft_getchar(stream) != '\n')
		key = MAPERR;
	return (key);
}
