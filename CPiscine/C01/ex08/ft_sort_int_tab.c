/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:25:04 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/05 14:00:09 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h> 
#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = 0;
	while (x < size - 1)
	{
		y = 0;
		while (y < size - 1)
		{
			if (tab[y] > tab [y + 1])
			{
				temp = tab[y];
				tab [y] = tab [y + 1];
				tab [y + 1] = temp;
			}
			y++;
		}
		x++;
	}
}
/*int	main(void)
{
	int	t[7];
	int	s;

	s = 7;
	t[0] = 7;
	t[1] = 5;
	t[2] = 8;
	t[3] = 4;
	t[4] = 9;
	t[5] = 2;
	t[6] = 1;
	printf("%d", t[0]);
	printf("%d", t[1]);
	printf("%d", t[2]);
	printf("%d", t[3]);
	printf("%d", t[4]);
	printf("%d", t[5]);
	printf("%d", t[6]);
	printf("\n");
	ft_sort_int_tab(t, s);
	printf("%d", t[0]);
	printf("%d", t[1]);
	printf("%d", t[2]);
	printf("%d", t[3]);
	printf("%d", t[4]);
	printf("%d", t[5]);
	printf("%d", t[6]);
}*/
