/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:40:45 by almorene          #+#    #+#             */
/*   Updated: 2023/10/20 18:19:38 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f (i, s);
		i++;
		s++;
	}
}
/*int main (void)
{
	char *s = "hola";
	char *t = "j";
	
	unsigned int i = 0;
	
	void *f (unsigned int i, char* t);
	printf("%d\n", ft_striteri(s, f(i, f)));
	return(0);// aplica la funcion a s y a i. Luego irtera las 2.
}*/
