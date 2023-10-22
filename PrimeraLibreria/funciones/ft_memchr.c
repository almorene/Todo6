/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:18:36 by almorene          #+#    #+#             */
/*   Updated: 2023/10/02 19:11:56 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
			ptr++;
			i++;
	}
	return (0);
}
/*int main (void)
{
    unsigned char s[] = {1, 2, 3, 4 ,5};
    int c;
    c = 5;
    size_t n;
    n = 5;
    void *result = ft_memchr(s, c, n);
    if (result != NULL)
    {
        size_t position = (unsigned char *)result - s;
        printf("%zu", position);
    }
    return(0);
}*/
