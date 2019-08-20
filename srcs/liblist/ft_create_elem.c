/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:19:33 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 18:27:04 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

t_list	*ft_create_elem(char data)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
