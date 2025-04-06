#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst -> next;
	}
	return (size);
}

/*int	main(void)
{
	t_list node1 = {"asd", NULL};
	t_list node2 = {"adsf", NULL};
	t_list node3 = {"jij", NULL};
	node1.next = &node2;
	node2.next = &node3;
	int	size = ft_lstsize(&node1);
	printf("%d\n", size);
}*/