/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:38 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:01:56 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies’f’ on the content of each node.
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
