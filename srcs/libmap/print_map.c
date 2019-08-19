/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhilary <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:32:59 by fhilary           #+#    #+#             */
/*   Updated: 2019/08/19 19:43:41 by fhilary          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

void	print_map(int stream, t_map *map)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < map->height)
	{
		j = 0;
		while (j < map->length)
			ft_putchar(stream, map->body[i][j++]);
		++i;
	}
}
