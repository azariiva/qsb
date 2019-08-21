/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lineaslist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:21:30 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 16:02:12 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

int	get_lineaslist(int stream, t_list **head)
{
	char	c;
	t_list	*ptr;

	*head = NULL;
	if ((c = ft_getchar(stream)) && c != '\n')
	{
		if (!(*head = ft_create_elem(c)))
			return (ALLERR);
		ptr = *head;
		while ((c = ft_getchar(stream)) != '\n')
		{
			if (!c && !free_list(*head))
				return (MAPERR);
			if (!(ptr->next = ft_create_elem(c)) && !free_list(*head))
				return (ALLERR);
			ptr = ptr->next;
		}
		return (OK);
	}
	return (MAPERR);
}
