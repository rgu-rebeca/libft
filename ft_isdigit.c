#include "libft.h"

int	ft_isdigit(int a)
{
	if ('0' <= a && a <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	a;

	a = 'a';
	if (ft_isdigit(a) == 1)
		write(1, "ok", 2);
	else
		write(1, "no", 2);
}*/
