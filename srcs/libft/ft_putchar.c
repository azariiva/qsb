#include "libft.h"

void	ft_putchar(int stream, char c)
{
	write(stream, &c, 1);
}
