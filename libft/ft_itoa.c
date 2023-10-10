/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:00:16 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/10 12:25:23 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:Allocates (with malloc(3)) and returns a string representing
the integer received as an argument. Negative numbers must be handled.
Return value:
The string representing the integer. NULL if the allocation fails.*/

#include "libft.h"

int	ft_intlen(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_convert(long nb, char *ptr, int intlen)
{
	int	result;
	int	is_negative;

	is_negative = 1;
	if (nb > 0)
		ptr[intlen] = '\0';
	if (nb < 0)
	{
		is_negative = 0;
		ptr[intlen + 1] = '\0';
		ptr[0] = '-';
		nb = -nb;
	}
	while (intlen != 0)
	{
		result = (nb % 10);
		ptr[intlen - is_negative] = result + 48;
		nb = nb / 10;
		intlen--;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	long	nb;
	int		intlen;

	nb = n;
	intlen = ft_intlen(nb);
	if (nb == 0)
		return (ft_strdup("0"));
	if (nb < 0)
		ptr = (char *)malloc(intlen + 2);
	else
		ptr = (char *)malloc(intlen + 1);
	if (!ptr)
		return (NULL);
	if (nb > 0 && nb < 10)
	{
		ptr[0] = nb + 48;
		ptr[1] = '\0';
		return (ptr);
	}
	else
		return ((ft_convert(nb, ptr, intlen)));
}
