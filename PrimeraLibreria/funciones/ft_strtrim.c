/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:30:18 by almorene          #+#    #+#             */
/*   Updated: 2023/10/20 18:36:37 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_s1_res;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size_s1_res = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size_s1_res]) && size_s1_res != 0)
		size_s1_res--;
	return (ft_substr((char *)s1, 0, size_s1_res +1));
}

/*int main ()
{
	char *s1 = "hola";
	char *s2 = "amigo";

	printf("%s\n", ft_strtrim(s1, s2));
	return(0);

	//primer while //cuenta las veces que hay caracteres set 
	//al principio de la cadena, hasta que llegue al nulo.
	//strlen //cuenta desde el numero de caracteres de s1 
	//desde donde se quedo s1, 
	//dado por la funcion anterior
	//segundo while // cuenta desde el final, 
	//el numero de caracteres que hay de set y se los resta a size_s1
	//antes de legar a zero.
	//return  //te copia desde el set contado al principio, 
	//en 0 por que ya estams al principio
	//de lo que queremos copiar, y hasta size_s1, 
	//que es el final de la cadena restado con los caracteres 
	//de set que habia  al final +1 
	//(para el nulo)
	//}*/
