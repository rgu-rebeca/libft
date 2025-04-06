#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t num, size_t size)
{
	void			*ptr;
	size_t			i;
	unsigned char	*ptr2;

	i = 0;
	if (size != 0 && num > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(num * size);
	ptr2 = (unsigned char *) ptr;
	if (ptr == NULL)
		return (NULL);
	while (i < size * num)
	{
		ptr2[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	int	*array;
	int i = 0;

	array = calloc(4, sizeof(int));
	if (!array)
		return 1;
	while (i < 4)
		printf("array[%d]: %d", i, array[i++]);
	free(array);
	return 0;
}*/
