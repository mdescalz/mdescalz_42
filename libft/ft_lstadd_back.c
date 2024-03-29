/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:26 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:03:15 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node ’new’ at the end of the list.
lst:  The address of a pointer to the first link of a list.
new:  The address of a pointer to the node to be added to the list.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else if (!*lst)
		*lst = new;
}
