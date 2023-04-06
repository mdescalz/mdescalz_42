/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 10:43:32 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/05 16:17:27 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line_b(x, y)
{
	int	i;
	int	l;

	i = 1;
	l = 1;
	while (l <= y - 2)
	{
		ft_putchar('B');
		while (i <= x -2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		i = 1;
		l++;
	}
}

//Imprimir una linea horizontal 
void	print_line(int x)
{
	int	i;

	i = 1;
	ft_putchar ('A');
	while (i <= x -2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
}

//Imprimir na linea vertical
void	print_column(int y)
{
	int	i;

	i = 1;
	ft_putchar('A');
	ft_putchar('\n');
	while (i <= y - 2)
	{
		ft_putchar('B');
		i++;
		ft_putchar('\n');
	}
	ft_putchar('C');
}

//Imprimir en funcio de los valores que se le asgina al main
void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
	}
	if (x >= 2 && y == 1)
	{
		print_line(x);
	}
	if (x == 1 && y >= 2)
	{
		print_column(y);
	}
	if (x > 1 && y > 1)
	{
		print_line(x);
		ft_putchar('\n');
		print_line_b(x, y);
		print_line(x);
	}
	else
	{
		write(1, "ERROR", 5);
	}
}

/*int	main(void)
{
	rush(-1, 4);
	return (0);
}*/
