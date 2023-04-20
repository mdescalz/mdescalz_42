/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 19:50:51 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/20 20:16:33 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *range;
	int	i;
	range = (int *) malloc(sizeof(int) * ());
	if (min >= max)
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

int	main(void)
{
	int	min;
	int	max;

	min = 1;
	max = 5;
	printf("%d", ft_range(min, max));
}
