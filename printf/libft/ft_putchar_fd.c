/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:27:29 by mdescalz          #+#    #+#             */
/*   Updated: 2023/10/11 12:14:13 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the character ’c’ to the given file descriptor. 
c:  The character to output.
fd:  The file descriptor on which to write.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
