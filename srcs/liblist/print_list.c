#include "liblist.h"

void	print_list(int stream, t_list *head)
{
	t_list	*ptr;

	ptr = head;
	while (ptr)
	{
		ft_putchar(stream, ptr->data);
		ptr = ptr->next;
	}
	ft_putchar(stream, '\n');
}
