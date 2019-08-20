/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lineaslist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:21:30 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 18:46:19 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

t_list	*get_lineaslist(int stream)
{
	char	c;
	t_list	*head;
	t_list	*ptr;

	if ((c = ft_getchar(stream)) && c != '\n' && (head = ft_create_elem(c)))
	{
		ptr = head;
		while ((c = ft_getchar(stream)) != '\n')
		{
			if (!c)
			{
				free_list(head);
				return (NULL);
			}
			if (!(ptr->next = ft_create_elem(c)))
			{
				free_list(head);
				return (NULL);
			}
			ptr = ptr->next;
		}
		return (head);
	}
	return (NULL);
}
