#include "libcharmap.h"

void	write_charmap_first_line(t_map *map, char **charmap)
{
	size_t	i;

	i = 0;
	while (i < map->length)
	{
		charmap[0][i] = (map->curr_line[i] != 0 ? map->empty : \
				map->obstacle);
		++i;
	}
}
