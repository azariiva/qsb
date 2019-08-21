#include "libmap.h"

int	swap_map_lines(t_map *map)
{
	size_t	*tmp;

	tmp = map->prev_line;
	map->prev_line = map->curr_line;
	map->curr_line = tmp;
	return (OK);
}
