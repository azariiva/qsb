#include "libft.h"

void	ft_puterr(int errcode)
{
	if (errcode == ALLERR)
		write(STDERR, "allocation error\n", 17);
	else if (errcode == MAPERR || errcode == FILERR)
		write(STDERR, "map error\n", 10);
}
