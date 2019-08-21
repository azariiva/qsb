/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_charmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:47:29 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 15:00:01 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcharmap.h"

void	free_charmap(char **charmap, size_t height)
{
	size_t	i;

	i = 0;
	while (i < height)
		free(charmap[i++]);
	free(charmap);
}
