/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:10:03 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/18 16:46:31 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_address(void *ptr)
{
	char		*str;
	uintptr_t	ptr_address;
	int			count;

	count = 0;
	ptr_address = (uintptr_t)ptr;
    if (!ptr)
    {
        if (write(1, "0x0", 3) == -1) 
            return -1;
        return (3);
	}
	count += write(1, "0x", 2);
	if (count == -1)
		return (-1);
	count += ft_print_digit_16(ptr_address, 1);
	if (count == -1)
		return (-1);
	return (count);
}
