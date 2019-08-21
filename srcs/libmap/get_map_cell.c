#include "libmap.h"

void	get_map_cell(t_map *map, size_t i)
{
	map->curr_line[i] = MIN(MIN(map->curr_line[i - 1], map->prev_line[i]), \
			map->prev_line[i - 1]) + 1;
}
