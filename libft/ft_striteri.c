/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:19:48 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:12:37 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument.  Each character is passed by
address to ’f’ to be modified if necessary.
s:  The string on which to iterate.
f:  The function to apply to each character.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
