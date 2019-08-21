#include "liblist.h"

int	get_lineaslist(int stream, t_list **head)
{
	char	c;
	t_list	*ptr;

	*head = NULL;
	if ((c = ft_getchar(stream)) && c != '\n')
	{
		if (!(*head = ft_create_elem(c)))
			return (ALLERR);
		ptr = *head;
		while ((c = ft_getchar(stream)) != '\n')
		{
			if (!c && !free_list(*head))
				return (MAPERR);
			if (!(ptr->next = ft_create_elem(c)) && !free_list(*head))
				return (ALLERR);
			ptr = ptr->next;
		}
		return (OK);
	}
	return (MAPERR);
}
