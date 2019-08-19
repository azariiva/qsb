/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blinnea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:53:03 by blinnea           #+#    #+#             */
/*   Updated: 2019/08/19 22:12:15 by blinnea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmap.h"

int	main(int argc, char **argv)
{
	t_map	*map;
	char	*filename;
	int		file;
	
	filename = argv[1];
	file = open(filename, O_RDONLY);
	if ((map = get_map(&file, filename)) != NULL)
		print_map(STDOUT, map);
	close(file);
	return (0);
}
