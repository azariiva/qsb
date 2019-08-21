#include "libcharmap.h"

char	**create_charmap(t_map *map)
{
	char	**charmap;
	size_t	i;

	if (!(charmap = (char **)malloc(map->height * sizeof(char *))))
		return (NULL);
	i = 0;
	while (i < map->height)
	{
		if (!(charmap[i] = (char *)malloc(map->length * sizeof(char))))
		{
			free_charmap(charmap, i);
			return (NULL);
		}
		++i;
	}
	return (charmap);
}
