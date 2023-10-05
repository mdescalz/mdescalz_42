/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:39:59 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 11:26:39 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memset() function fills the first n bytes of the 
memory area pointed to by s with the constant byte 
function returns a pointer to the memory area s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*a;

	a = s;
	i = 0;
	while (n--)
	{
		*a = c;
		a++;
	}
	return (s);
}
