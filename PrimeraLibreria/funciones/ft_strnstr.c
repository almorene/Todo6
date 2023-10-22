/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:42:57 by almorene          #+#    #+#             */
/*   Updated: 2023/10/17 11:26:25 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<strings.h>
#include<stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	pos;
	size_t	i;

	if (!*to_find)
		return ((char *) str);
	pos = 0;
	while (str[pos] != '\0' && pos < len)
	{
		i = 0;
		if (str[pos] == to_find[i])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i]
				&& (pos + i) < len)
				++i;
			if (to_find[i] == '\0')
				return ((char *)&str[pos]);
		}
		++pos;
	}
	return (0);
}
/*int main(void)
{
    const char str[] = "Quepaisa";
    const char to_find[] = "isa";
    int len;
    len = 8;
    printf("%s",ft_strnstr(str, to_find, len));
    return(0);
}*/
