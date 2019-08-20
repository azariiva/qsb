/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:28:23 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 19:23:39 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>

/*
 ** Standart streams.
*/
# define STDIN 0
# define STDOUT 1
# define STDERR 2

/*
 ** Error codes.
*/
# define OK 0
# define ALLERR -1
# define FILERR -2
# define MAPERR -3

void	ft_putchar(int stream, char c);
char	ft_getchar(int stream);
void	ft_putstr(int stream, char *str);
void	ft_putnbr(int stream, unsigned int nbr);
void	ft_puterr(int errcode);

#endif
