/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torange <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:07:12 by torange           #+#    #+#             */
/*   Updated: 2019/08/19 18:15:05 by torange          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int steam, char c)
{
	write (stream, &c, stream);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
