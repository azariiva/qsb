/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:50:37 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 18:42:29 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_help_putnbr(int stream, unsigned int nb)
{
	if (nb != 0)
	{
		ft_help_putnbr(stream, nb / 10);
		ft_putchar(stream, nb % 10 + '0');
	}
}

void	ft_putnbr(int stream, unsigned int nb)
{
	if (nb != 0)
		ft_help_putnbr(stream, nb);
	else
		ft_putchar(stream, '0');
}
