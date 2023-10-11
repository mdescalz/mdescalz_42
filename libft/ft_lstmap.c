/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:10:43 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:01:53 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates the list ’lst’ and applies ’f’ on the content of each node.  
Creates a new list resulting of the successive applications of ’f’.  
The ’del’ function is used to delete the content of a node if needed.
lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: The address of the function used to delete the content of a node.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));