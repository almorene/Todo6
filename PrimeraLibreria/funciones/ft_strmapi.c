/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:27:51 by almorene          #+#    #+#             */
/*   Updated: 2023/10/17 16:45:42 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*char funcion_ejemplo(unsigned int nbr, char c)
{
	return (c + (char)nbr);
}


int main(void)
{
	char *str = "hola Mundo";
	char *str2 = "aaaaaaaaaa";
	printf("%s\n", ft_strmapi(str, funcion_ejemplo));
	printf("%s\n", ft_strmapi(str2, funcion_ejemplo));
	return(0);
}*/
