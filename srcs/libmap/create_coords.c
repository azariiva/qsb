/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_coords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:12:50 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 21:16:30 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	create_coords(t_coords **c)
{
	if (!(*c = (t_coords *)malloc(sizeof(t_coords))))
		return (ALLERR);
	(*c)->i = 0;
	(*c)->j = 0;
	(*c)->area = 0;
	return (OK);
}
