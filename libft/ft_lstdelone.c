/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:36 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:01:58 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Takes as a parameter a node and frees the memory of the node’s content
using the function ’del’ given as a parameter and free the node.
The memory of ’next’ must not be freed.
lst:  The node to free.
del:  The address of the function used to delete the content.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
