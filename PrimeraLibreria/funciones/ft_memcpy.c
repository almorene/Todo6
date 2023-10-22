/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:30:22 by almorene          #+#    #+#             */
/*   Updated: 2023/10/15 15:34:23 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *)dst;
	source = (unsigned char *) src;
	if (!n || dst == src)
		return (dst);
	i = 0;
	while (n > 0)
	{
		dest[i] = source[i];
		n--;
		i++;
	}
	return (dst);
}

/*int main(void)
{
	unsigned char des[50];
	unsigned char src[6] = "amigo";
	size_t i;
	i = 2;
	//memccpy(des, src, i);
	printf("%s\n", memcpy(des, src, i));
	printf("%s\n", ft_memcpy(des, src, i));

	//printf("%d",)
}*/
