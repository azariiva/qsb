#include "libmap.h"

int	free_map(t_map *map)
{
	free(map->prev_line);
	free(map->curr_line);
	return (OK);
}
