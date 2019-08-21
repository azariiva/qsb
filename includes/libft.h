#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <fcntl.h>

# define MIN(a,b) (a < b ? a : b)

/*
 ** Standart streams.
*/
# define STDIN 0
# define STDOUT 1
# define STDERR 2

/*
 ** Error codes.
*/
# define OK 0
# define ALLERR -1
# define FILERR -2
# define MAPERR -3

void	ft_putchar(int stream, char c);
char	ft_getchar(int stream);
void	ft_puterr(int errcode);

#endif
