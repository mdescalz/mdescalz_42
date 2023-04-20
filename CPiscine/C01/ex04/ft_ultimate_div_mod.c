/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:53:00 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/05 14:05:17 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	module;

	division = *a / *b;
	module = *a % *b;
	*a = division;
	*b = module;
}
/*int	main(void)
{
	int	num1;
	int	num2;
	int *ptr1;
	int *ptr2;

	num1 = 15;
	num2 = 3;
	ptr1 = &num1;
	ptr2 = &num2;
	printf("%d", num1);
	printf("%d ", num2);
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d", num1);
	printf("%d ", num2);
}*/
