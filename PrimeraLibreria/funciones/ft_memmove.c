/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:16:55 by almorene          #+#    #+#             */
/*   Updated: 2023/10/20 18:14:34 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *) dst;
	ptr2 = (unsigned char *) src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
	{
		while (len > 0)
		{
			(*ptr++) = (*ptr2++);
			len--;
		}
	}
	return (dst);
}
/*int main (void)
{
	size_t len;
	len = 6;
	char source[] = "comeme los $WFWEq";
	char dest[20] = "comi";
	printf("%s\n", memmove(dest, source, len));
	printf("%s\n", ft_memmove(dest, source, len));
	return(0);
}*/
