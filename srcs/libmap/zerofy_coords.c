#include "libmap.h"

int	zerofy_coords(t_coords *coords)
{
	coords->i = 0;
	coords->j = 0;
	coords->area = 0;
	return (OK);
}
