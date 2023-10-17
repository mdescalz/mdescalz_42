/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:31 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/20 12:56:50 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* used to check whether the input character is a 
printable character on the screen (including the space character) or not
If a character passed is a printable character, it returns non-zero integer, 
if not it returns 0.*/

#include "libft.h"

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg < 127)
		return (1);
	else
		return (0);
}
