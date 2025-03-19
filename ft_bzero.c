
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int	main(void)
{
    char buffer[20] = "Hola, mundo!"; 
    printf("Antes: %s\n", buffer);
    ft_bzero(buffer, 1);
    printf("Después: %s\n", buffer);
    
    return 0;
}*/