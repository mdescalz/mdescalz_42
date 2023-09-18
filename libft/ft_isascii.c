/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:26:50 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/18 10:27:04 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isascii() function tests for an ASCII character (in the range 0 to 127). 
Returns: Nonzero if c is an ASCII character; otherwise, zero*/

#include "libft.h"

int	ft_isascii(int arg)
{
	if (arg >= 0 && arg <= 127)
		return (1);
	else
		return (0);
}
