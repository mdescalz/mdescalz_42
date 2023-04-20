/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:25:25 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/05 16:44:04 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*int	main(void)
{
	int	num1;
	int	num2;
	int	*ptr1;
	int	*ptr2;

	num1 = 48;
	num2 = 49;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("%d \n", num1);
	printf("%d \n", num2);
	ft_swap(ptr1, ptr2);
	printf("%d \n", num1);
	printf("%d", num2);
}*/
