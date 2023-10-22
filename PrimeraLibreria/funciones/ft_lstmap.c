/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:48:15 by almorene          #+#    #+#             */
/*   Updated: 2023/10/20 18:09:06 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*aux;
	void	*contenido;

	new_node = NULL;
	while (lst)
	{
		contenido = f(lst->content);
		aux = ft_lstnew(contenido);
		if (!aux)
		{
			ft_lstclear(&new_node, del);
			free (contenido);
			return (NULL);
		}
		ft_lstadd_back(&new_node, aux);
		lst = lst->next;
	}
	return (new_node);
}
