/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:00:29 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/17 10:22:39 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	repeated_char(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_nbr(int n, int count_base, char *base)
{
	int long	nl;

	nl = n;
	if (nl < 0)
	{
		nl = -nl;
		ft_putchar ('-');
	}
	if (nl >= count_base)
		print_nbr(nl / count_base, count_base, base);
	ft_putchar (base[nl % count_base]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	count_base;

	count_base = 0;
	while (base[count_base] != '\0')
	{
		if (base[count_base] == 43 || base[count_base] == 45)
			return ;
		count_base++;
	}
	if (count_base < 2)
		return ;
	if (repeated_char(base))
		return ;
	print_nbr(nbr, count_base, base);
}
/*int	main(void)
{
	int	number;
	char	basetype[] = "01";
	number = 42;
	ft_putnbr_base(number, basetype);
	//printf("%d \n", ft_putnbr_base(number, basetype));
}*/
