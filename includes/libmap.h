/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:32:46 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/20 15:19:00 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMAP_H

# define LIBMAP_H

# include "libft.h"
# include <fcntl.h>

# define OK 0
# define ERR -1

typedef struct	s_map
{
	size_t		length;
	size_t		height;
	char		empty;
	char		obstacle;
	char		filled;
	int			*prev_line;
	int			*cur_line;
}				t_map;

int				is_correct_sym(char c);
int				get_map_height_eof(int stream, t_map *map);
int				get_map_length(int *stream, t_map *map, char *filename);

#endif
