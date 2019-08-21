#include "libmap.h"

int	find_max_coords(t_coords *coords, t_map *map, size_t height)
{
	size_t	i;

	i = 0;
	while (i < map->length)
	{
		if (map->curr_line[i] > coords->area)
		{
			coords->area = map->curr_line[i];
			coords->i = height;
			coords->j = i;
		}
		++i;
	}
	return (OK);
}
