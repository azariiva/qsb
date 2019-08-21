#include "libft.h"

char	ft_getchar(int stream)
{
	char c;

	if (read(stream, &c, 1) <= 0)
		return (0);
	return (c);
}
