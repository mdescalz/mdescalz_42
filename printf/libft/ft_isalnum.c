/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:26:25 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/18 10:26:40 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function isalnum() is used to check 
that the character is alphanumeric or not. 
It returns non-zero value, if the character 
is alphanumeric means letter or number otherwise, returns zero*/

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (ft_isalpha(arg) == 1 || ft_isdigit(arg) == 1)
		return (1);
	else
		return (0);
}
