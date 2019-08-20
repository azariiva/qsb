/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:32:08 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 15:46:01 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	make_map(char *filename, t_map **map)
{
	int		stream;

	if ((stream = open(filename, O_RDONLY)) <= 0)
		return (FILEERR);
	if (!(*map = (t_map *)malloc(sizeof(t_map))))
		return (ALLERR);
	if (get_map_height_eof(stream, *map) || \\
			get_map_length(&stream, *map, filename))
	{
		free(*map);
		return (MAPERR);
	}
	if (!((*map)->prev_line = (int *)malloc(sizeof(int) * (*map)->length)))
	{
		free(*map);
		return (ALLERR);
	}
	if (!(map->curr_line = (int *)malloc(sizeof(int) * map->length)))
	{
		free((*map)->prev_line);
		free(*map);
		return (ALLERR);
	}
	return (OK);
}

