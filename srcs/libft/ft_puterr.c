/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 19:32:28 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 17:36:42 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterr(int errcode)
{
	if (errcode == ALLERR)
		write(STDERR, "allocation error\n", 17);
	else if (errcode == FILERR)
		write(STDERR, "file error\n", 11);
	else if (errcode == MAPERR)
		write(STDERR, "map error\n", 10);
}
