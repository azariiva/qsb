#include "liblist.h"

int	free_list(t_list *head)
{
	t_list	*ptr;
	t_list	*tofree;

	ptr = head;
	while (ptr)
	{
		tofree = ptr;
		ptr = ptr->next;
		free(tofree);
	}
	return (OK);
}
