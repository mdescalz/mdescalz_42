/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:28:00 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/18 10:28:01 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*tolower() function in C is used to convert
the uppercase alphabet to the lowercase alphabet. 
It does not affect characters other than uppercase characters.*/

#include "libft.h"

int	ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
		return (arg +32);
	else
		return (arg);
}
