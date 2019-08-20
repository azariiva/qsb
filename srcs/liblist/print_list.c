/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:34:22 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 18:41:11 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

void	print_list(int stream, t_list *head)
{
	t_list	*ptr;

	ptr = head;
	while (ptr)
	{
		ft_putchar(stream, ptr->data);
		ptr = ptr->next;
	}
	ft_putchar(stream, '\n');
}
