/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:33 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:02:00 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Deletes and frees the given node and every successor of that node,
using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
lst:  The address of a pointer to a node.
del:  The address of the function used to delete the content of the node.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst && del)
	{
		while (*lst)
		{
			current = *lst;
			*lst = current->next;
			del(current->content);
			free(current);
		}
	}
}
