/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:27:51 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/18 10:27:53 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlen() function takes a string as an argument 
and returns its length.*/

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
