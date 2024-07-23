#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int len;
	if (!begin_list)
		return (0);
	len = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		len++;
	}
	return len;
}
