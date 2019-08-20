/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:32:46 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 20:31:31 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMAP_H

# define LIBMAP_H

# include "libft.h"
# include "liblist.h"

typedef struct	s_map
{
	size_t		length;
	size_t		height;
	char		empty;
	char		obstacle;
	char		filled;
	size_t		*prev_line;
	size_t		*curr_line;
}				t_map;

typedef struct	s_coords
{
	size_t	i;
	size_t	j;
	size_t	area;
}				t_coords;

int				is_correct_sym(char c);
int				get_map_height_eof(int stream, t_map *map);
int				make_map_lines(t_map *map);
int				get_map_line(int stream, t_map *map);
int				free_map(t_map *map);

#endif
