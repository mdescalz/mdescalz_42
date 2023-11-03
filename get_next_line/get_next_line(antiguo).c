/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line(antiguo).c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:13:05 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/03 14:18:19 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_new_line(char *buffer, buffer_size)
{
	char	*new_line;

	new_line = (char *)malloc((size_t)buffer_size);
	if (new_line == NULL)
	{
		free(buffer);
		return (NULL);
	}
	return (new_line);
}

static char	*check_buffer(int fd, char *buffer, size_t buffer_size)
{
	int		check;
	int		i;
	size_t	chars_read;
	char	*new_line;

	i = 0;
	check = 0;
	new_line = ft_new_line(buffer, buffer_size);
	if (new_line == NULL)
	{
		free(new_line)
		return(NULL);
	}
	while (check == 0)
	{
		chars_read = read(fd, buffer, 10);
		i = 0;
		while (check == 0 && i < buffer_size && buffer[i] != 0)
		{
			if (buffer[i] != '\n')
			{
				new_line[i] = buffer[i];
				i++;
			}
			else
				check = 1;
		}
	}
	new_line[i] = '\0';
	free(buffer);
	return (new_line);
}
char	*get_next_line(int fd)
{
	char	*buffer;
	size_t	buffer_size;

	buffer_size = 20;
	buffer = (char *)malloc((size_t)buffer_size + 1);
	if (fd < 0 || buffer == NULL)
		return (NULL);
	return (check_buffer(fd, buffer, buffer_size));
}

int	main(void)
{
	int fd1;
	size_t bytes_read;

	fd1 = open("file.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd1));
	close(fd1);
}