#include "libcharmap.h"

void	free_charmap(char **charmap, size_t height)
{
	size_t	i;

	i = 0;
	while (i < height)
		free(charmap[i++]);
	free(charmap);
}
