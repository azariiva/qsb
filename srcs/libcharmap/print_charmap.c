/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_charmap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:57:47 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 17:32:31 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcharmap.h"

void	print_charmap(t_map *map, char **charmap)
{
	size_t	i;

	i = 0;
	while (i < map->height)
	{
		write(STDOUT, charmap[i], map->length);
		ft_putchar(STDOUT, '\n');
		++i;
	}
}
