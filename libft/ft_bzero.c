/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:47:51 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/20 12:56:19 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes
containing '\0') to that area.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = '\0';
		i++;
	}
}
