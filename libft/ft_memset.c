/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:25:57 by mdescalz          #+#    #+#             */
/*   Updated: 2023/09/18 20:47:07 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memset() function fills the first n bytes 
of the memory area pointed to by s with the constant byte c
function returns a pointer to the memory area s.*/

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    unsigned    char *a; 

    a = s;
    i = 0;
    while (i < n)
    {
        a[i] = c;
        i++;
    }
    return (a);
}

/*int main(void)
{
    int value;
    size_t n;
    char array[50]; 

    value = 65;
    n = 5;

}*/