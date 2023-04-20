/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:04:53 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/04 10:14:48 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c1, char c2, char c3)
{
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (c1 + c2 + c3 != 168)
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	x;
	char	z;
	char	y;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{	
		while (y <= '8')
		{				
			while (z <= '9')
			{
				ft_putchar(x, y, z);
			z++;
			}
		++y;
		z = y + 1;
		}
	x++;
	y = x + 1;
	z = y + 1;
	}	
}
/*int	main(void)
{
	ft_print_comb();
}*/
