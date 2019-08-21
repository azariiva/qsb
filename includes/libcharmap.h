/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libcharmap.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 14:39:52 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/21 14:58:19 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBCHARMAP_H

# define LIBCHARMAP_H

# include "libmap.h"

char	**create_charmap(t_map *map);
void	write_charmap_line(t_map *map, char **charmap, size_t height);
void	fill_charmap_square(t_coords *coords, t_map *map, char **charmap);
void	free_charmap(char **charmap, size_t height);
void	print_charmap(t_map *map, char **charmap);

#endif
