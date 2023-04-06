/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:02:39 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/03 17:37:01 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	write (1, &n, 1);
}

/*int	main(void)
{
	int	i;

	i = 2;
	ft_print_combn(i);
}*/
