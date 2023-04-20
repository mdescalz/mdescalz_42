/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:24:29 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/05 14:05:48 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	temp = 0;
	x = 0;
	y = size - 1;
	while (x < (size / 2))
	{
		temp = tab[x];
		tab[x] = tab[y];
		tab[y] = temp;
		x++;
		y--;
	}
}
/*int	main(void)
{
	int	t[7];
	int	s;

	s = 7;
	t[0] = 1;
	t[1] = 2;
	t[2] = 3;
	t[3] = 4;
	t[4] = 5;
	t[5] = 6;
	t[6] = 7;
	printf("%d", t[0]);
	printf("%d", t[1]);
	printf("%d", t[2]);
	printf("%d", t[3]);
	printf("%d", t[4]);
	printf("%d", t[5]);
	printf("%d", t[6]);
	printf("\n");
	ft_rev_int_tab(t, s);
	printf("%d", t[0]);
	printf("%d", t[1]);
	printf("%d", t[2]);
	printf("%d", t[3]);
	printf("%d", t[4]);
	printf("%d", t[5]);
	printf("%d", t[6]);
}*/
