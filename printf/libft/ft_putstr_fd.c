/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:31:03 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:13:11 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string ’s’ to the given file descriptor.
s:  The string to output.
fd:  The file descriptor on which to write.*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &(s[i]), 1);
		i++;
	}
}
