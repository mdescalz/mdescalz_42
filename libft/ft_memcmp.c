/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:39:59 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/22 12:20:55 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	i = 0;
	while (i < n && ptr1[i] == ptr2[i])
		i++;
	if (i < n)
		return ((ptr1[i] - ptr2[i]));
	else
		return (0);
}
