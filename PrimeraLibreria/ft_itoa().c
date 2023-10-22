/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:02:40 by almorene          #+#    #+#             */
/*   Updated: 2023/10/04 19:13:25 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	unsigned int	num;
	int				max_digits;
	char			*str;
	char			*result;
	int				sign;
	int				i;
	int				j;

	max_digits = 12;
	str = (char *)malloc((max_digits + 1) * sizeof(char));
	if (str == NULL)
		return(NULL);
	if (n <  0)
		sign = -1;
	else
		sign = 1;
	if(n < 0)
		num = -n;
	else
		num = n;
	i = max_digits;
	str[i] = '\0';
	while (i > 0)
	{
		str[--i] = num % 10 + '0';
		num /= 10;
		break;
	}
	if (sign == -1)
		str[--i] = '-';
	result = (char *)malloc((max_digits - i + 1) * sizeof(char));
	if(result == NULL)
	{
	free(str);
	return (NULL);
	}
	j = 0;
	while (str [i] != '\0')
	result[j++] = str[i];

	result[j] = '\0';
	free (str);
	return(result);
}
int main(void)
{
	int i;

	i = -12345;

	printf("%s\n", ft_itoa(i));

	return(0);
}
      