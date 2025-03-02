/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgu <rgu@student.42madrid.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:41:23 by ruijia            #+#    #+#             */
/*   Updated: 2025/03/02 21:48:51 by rgu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	unsigned char		*b;

	if (!dest && !src)
		return (NULL);
	a = (const unsigned char *)src;
	b = (unsigned char *) dest;
	if (b <= a)
	{
		i = 0;
		while (i < n)
		{
			b[i] = a[i];
			i++;
		}
	}
	if (b > a)
	{
		i = n;
		while (i > 0)
		{
			b[i - 1] = a[i - 1];
			i--;
		}
	}
	return (dest);
}

/*int main(void)
{
    char buffer[20] = "Hola, mundo!"; 
    printf("Antes: %s\n", buffer);
    
    ft_memmove(buffer, buffer + 2, 6);
    printf("Después: %s\n", buffer);
    
    return 0;
}*/