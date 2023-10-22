/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:10:33 by almorene          #+#    #+#             */
/*   Updated: 2023/10/20 18:44:14 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_of_s;
	char	*substr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	len_of_s = ft_strlen(s);
	if (start >= len_of_s)
		return (ft_strdup(""));
	i = 0;
	if (start + len == len_of_s + 1 || len > len_of_s)
		len = len_of_s - start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(substr, (char *)s, len + 1);
	return (substr);
}
/*int main (void)
{
	char const *s = "hola, amigo mio";
	unsigned int start = 15;
	size_t len = 20;

	printf("%s" ,ft_substr(s, start, len));
	return(0);
}*/
