/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_listsize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:44:23 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 18:46:59 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

size_t	get_listsize(t_list *head)
{
	t_list	*ptr;
	size_t	size;

	size = 0;
	ptr = head;
	while (ptr)
	{
		++size;
		ptr = ptr->next;
	}
	return (size);
}
