/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:00:16 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/05 13:41:19 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description:Allocates (with malloc(3)) and returns a string representing
the integer received as an argument. Negative numbers must be handled.
Return value:
The string representing the integer. NULL if the allocation fails.*/

#include "libft.h"

long    ft_intlen(int n)
{
    long    count;

    count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    char    *ptr;
    long    nb;
    size_t    i;
    long    intlen;

    nb = n;
    i = 0;
    intlen = ft_intlen(nb);
    ptr = (char *)malloc(ft_intlen(nb) + 1);
    if (nb < 0)
        nb = -nb;
    if (nb < 10)
        ptr[i] = nb + 48;
    if (nb >= 10)
    {
        while (intlen != 0)
        {
            i = (nb % 10);
            ptr[intlen - 1] = i + 48;
            nb = nb / 10;
            intlen--;
        }
    }
    return (ptr);
}

int    main(void)
{
    printf("String converted is  %s", ft_itoa(135));
}
