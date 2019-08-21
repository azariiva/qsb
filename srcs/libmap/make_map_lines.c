#include "libmap.h"

int	make_map_lines(t_map *map)
{
	if (!(map->prev_line = (size_t *)malloc(map->length * sizeof(size_t))) || \
			!(map->curr_line = (size_t *)malloc(map->length * sizeof(size_t))))
	{
		free(map->prev_line);
		return (ALLERR);
	}
	return (OK);
}
