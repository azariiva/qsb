#include "libmap.h"

int	is_correct_sym(char c)
{
	if (c && c != '\n')
		return (OK);
	return (MAPERR);
}
