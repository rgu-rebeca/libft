#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char str[5] = "nawe";
	char *s = ft_memset(&str, 'b', 3);
	printf("%s\n", s);
}*/