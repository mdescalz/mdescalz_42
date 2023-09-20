/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:12 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/20 12:56:39 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalpha() function checks whether a character 
is an alphabet (a to z and A-Z) or not. 
If a character passed to isalpha() is an alphabet, 
it returns a non-zero integer, if not it returns 0.*/

#include "libft.h"

int	ft_isalpha(int arg)
{
	if ((arg >= 65 && arg <= 90)
		|| (arg >= 97 && arg <= 122))
		return (1);
	else
		return (0);
}
