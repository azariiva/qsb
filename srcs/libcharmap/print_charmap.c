#include "libcharmap.h"

void	print_charmap(t_map *map, char **charmap)
{
	size_t	i;

	i = 0;
	while (i < map->height)
	{
		write(STDOUT, charmap[i], map->length);
		ft_putchar(STDOUT, '\n');
		++i;
	}
}
