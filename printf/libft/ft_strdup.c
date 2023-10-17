/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:31:24 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/06 09:53:59 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	str_len;

	str_len = ft_strlen(str);
	ptr = (char *)malloc(str_len + 1);
	if (ptr)
	{
		ft_memcpy(ptr, str, str_len);
		ptr[str_len] = '\0';
	}
	return (ptr);
}
