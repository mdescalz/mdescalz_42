/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 16:23:21 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/05 16:44:19 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{		
		write (1, (str + i), 1);
		i ++;
	}
}
/*int	main(void)
{
	char	ex[] = "tus muertos";
	char	*ptr1;

	ptr1 = &ex[0];
	ft_putstr(ptr1);
}*/
