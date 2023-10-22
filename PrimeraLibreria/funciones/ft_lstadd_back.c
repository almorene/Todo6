/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:14:16 by almorene          #+#    #+#             */
/*   Updated: 2023/10/12 14:18:32 by almorene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n;

	if (lst == NULL || new == NULL)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		n = ft_lstlast(*lst);
		n -> next = new;
	}
}
