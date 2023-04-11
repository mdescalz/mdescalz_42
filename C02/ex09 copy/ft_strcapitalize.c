/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:31:05 by mdescalz          #+#    #+#             */
/*   Updated: 2023/04/09 17:45:02 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>
#include <stdio.h>*/
int	ft_str_is_alpha(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	first;
	int	i;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		if (first == 1 && (ft_str_is_alpha(str[i]) == 1
				|| ft_str_is_numeric(str[i]) == 1))
		{
			first = 0;
			if (ft_str_is_lowercase(str[i]) == 1)
				str[i] -= 32;
		}
		else if (first == 0 && ft_str_is_uppercase(str[i]) == 1)
			str[i] += 32;
		else if (first == 0 && (ft_str_is_alpha(str[i]) == 0
				&& ft_str_is_numeric(str[i]) == 0))
			first = 1;
		i++;
	}
	return (str);
}
/*int main(void)
{
	char    source[] = "salut, comment tu vas ? 
	42mots quarante-deux; cinquante+et+un";
    printf("%s", ft_strcapitalize(source));
}*/
