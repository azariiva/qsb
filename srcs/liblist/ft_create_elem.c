#include "liblist.h"

t_list	*ft_create_elem(char data)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
