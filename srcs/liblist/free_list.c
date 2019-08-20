/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:29:33 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 20:17:40 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

int	free_list(t_list *head)
{
	t_list	*ptr;
	t_list	*tofree;

	ptr = head;
	while (ptr)
	{
		tofree = ptr;
		ptr = ptr->next;
		free(tofree);
	}
	return (OK);
}
