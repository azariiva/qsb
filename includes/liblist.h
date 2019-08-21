#ifndef LIBLIST_H

# define LIBLIST_H

# include "libft.h"
# include <stdlib.h>

typedef struct		s_list
{
	char			data;
	struct s_list	*next;
}					t_list;

t_list				*ft_create_elem(char data);
int					get_lineaslist(int stream, t_list **head);
int					free_list(t_list *head);
void				print_list(int stream, t_list *head);
size_t				get_listsize(t_list *head);

#endif
