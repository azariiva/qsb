#include "liblist.h"

size_t	get_listsize(t_list *head)
{
	t_list	*ptr;
	size_t	size;

	size = 0;
	ptr = head;
	while (ptr)
	{
		++size;
		ptr = ptr->next;
	}
	return (size);
}
