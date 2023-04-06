/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:36:05 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/05 14:05:06 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	num1;
	int	num2;
	int	division;
	int remainder;
	int	*ptr_div;
	int	*ptr_mod;

	num1 = 23;
	num2 = 3;
	division = 0;
	remainder = 0;
	ptr_div = &division;
	ptr_mod = &remainder;

	printf("%d", division);
	printf("%d ", remainder);
	ft_div_mod(num1, num2, ptr_div, ptr_mod);
	printf("%d", division);
	printf("%d ", remainder);
}*/
