/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:32:28 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 19:48:15 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterr(int errcode)
{
	if (errcode == ALLERR)
		ft_putstr(STDERR, "allocation error\n");
	else if (errcode == FILERR)
		ft_putstr(STDERR, "file error\n");
	else if (errcode == MAPERR)
		ft_putstr(STDERR, "map error\n");
}
