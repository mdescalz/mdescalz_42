/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:28:13 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/18 10:28:15 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The toupper() function is used to convert lowercase alphabet to uppercase. 
i.e. If the character passed is a lowercase alphabet then the toupper() function 
converts a lowercase alphabet to an uppercase alphabet*/

#include "libft.h"

int	ft_toupper(int arg)
{
	if (arg >= 97 && arg <= 122)
		return (arg -32);
	else
		return (arg);
}
