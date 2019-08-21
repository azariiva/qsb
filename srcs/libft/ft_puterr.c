/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:32:28 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 20:44:02 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterr(int errcode)
{
	if (errcode == ALLERR)
		write(STDERR, "allocation error\n", 17);
	else if (errcode == MAPERR || errcode == FILERR)
		write(STDERR, "map error\n", 10);
}
