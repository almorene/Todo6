/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 13:04:44 by almorene          #+#    #+#             */
/*   Updated: 2023/10/13 21:49:47 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

#include "libft.h"

static void	ft_len_magnitude(int n, int *len, int *mag)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*mag = 1;
	while (n / *mag < -9)
	{
		*mag *= 10;
		*len += 1;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		mag;
	int		i;
	char	*new;

	ft_len_magnitude(n, &len, &mag);
	new = (char *)malloc(sizeof(char) * (len + 2));
	if (new == 0)
		return (NULL);
	i = 0;
	if (n < 0)
		new[i++] = '-';
	if (n > 0)
		n = -n;
	while (mag >= 1)
	{
		new[i++] = -((n / mag) % 10) + '0';
		mag /= 10;
	}
	new[i] = '\0';
	return (new);
}

/*int main(void)
{
	//char str[50] = "-1234a";
	int i = 12345;
	printf("%s\n", ft_itoa(i));
	//printf("%d\n", itoa(i));
	return(0);
}*/
