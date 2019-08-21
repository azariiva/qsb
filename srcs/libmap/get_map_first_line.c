/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:52:08 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 17:12:31 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"
#include "libcharmap.h"

int	get_map_first_line(int stream, t_map *map)
{
	t_list	*head;
	t_list	*ptr;
	int		errcode;
	size_t	i;

	if ((errcode = get_lineaslist(stream, &head)) && !free_list(head))
		return (errcode);
	map->length = get_listsize(head);
	if ((errcode = make_map_lines(map)))
		return (errcode | free_list(head));
	i = 0;
	ptr = head;
	while (i < map->length)
	{
		map->prev_line[i] = 0;
		if (ptr->data == map->empty)
			map->curr_line[i++] = 1;
		else if (ptr->data == map->obstacle)
			map->curr_line[i++] = 0;
		else if (!free_list(head))
			return (MAPERR | free_map(map));
		ptr = ptr->next;
	}
	return (free_list(head));
}
