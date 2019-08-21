#include "libcharmap.h"

int	process_input(int stream, t_map *map, t_coords *coords)
{
	int		errcode;
	size_t	i;
	char	**charmap;

	zerofy_coords(coords);
	if (!(errcode = get_map_height_eof(stream, map)) && \
			!(errcode = get_map_first_line(stream, map)) && \
			!(charmap = create_charmap(map)))
		errcode = ALLERR;
	else if (!errcode && !(i = 0))
	{
		write_charmap_first_line(map, charmap);
		find_max_coords(coords, map, 0);
		while (++i < map->height && !swap_map_lines(map) && \
				!((errcode = get_map_line(stream, map, charmap[i])) || \
					find_max_coords(coords, map, i)))
			;
		errcode = (ft_getchar(stream) ? MAPERR : errcode);
		if (!errcode && !fill_charmap_square(coords, map, \
					charmap))
			print_charmap(map, charmap);
		free_charmap(charmap, map->height);
		free_map(map);
	}
	return (errcode);
}
