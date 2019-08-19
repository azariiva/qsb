/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:28:23 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/19 18:03:14 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define STDIN 0
# define STDOUT 1
# define  STDERR 2

void	ft_putchar(int stream, char c);
char	ft_getchar(int stream);
void	ft_putstr(int stream, char *str);

#endif
