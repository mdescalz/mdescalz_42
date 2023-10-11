/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:31 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:02:57 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node ’new’ at the beginning of the list.
lst:  The address of a pointer to the first link of a list.
new:  The address of a pointer to the node to be added to the list.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new && lst)
	{
		temp = *lst;
		new->next = temp;
		*lst = new;
	}
}
