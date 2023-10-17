/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:46 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:01:51 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new node. The member variable 
’content’ is initialized with the value of the parameter ’content’.  
The variable ’next’ is initialized to NULL.
content:  The content to create the node with.*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
