/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:42:21 by almorene          #+#    #+#             */
/*   Updated: 2023/10/15 21:25:15 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char ) c)
			return ((char *)s);
	s++;
	}
	if ((unsigned char )c == '\0')
		return ((char *)s);
	return (0);
}
/*int main()
{
    char str [10] = "hola";
    int c;
    c = 'o';
    printf("%s\n", ft_strchr(str, c));
	printf("%s\n", strchr(str,c));
    return(0);
}*/
