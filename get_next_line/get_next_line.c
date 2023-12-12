/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:52:58 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/28 12:04:18 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *buffer, char *buf)
{
	char	*temp = ft_strjoin(buffer, buf);
	free(buffer);
	return temp;
}

char	*ft_next(char *buffer)
{
	int		i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return NULL;
	}
	char *line = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	i++;
	int j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	free(buffer);
	return line;
}

char	*ft_line(char *buffer)
{
	int		i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	char	*line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return line;
}

char	*read_file(int fd, char *res)
{
	char	buffer[BUFFER_SIZE + 1];
	int		byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
			return NULL;
		buffer[byte_read] = 0;
		res = ft_free(res, buffer);
		if (ft_strchr(buffer, '\n'))
			break;
	}
	return res;
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return NULL;
	buffer = read_file(fd, buffer);
	if (!buffer)
		return NULL;
	char	*line = ft_line(buffer);
	buffer = ft_next(buffer);
	return line;
}


/*int	main(void)
{
	int	fd;
	char *line;

	fd = open("file.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free (line);
		line = get_next_line(fd);
	}
	close(fd);
}*/

/*char	*get_next_line(int fd)
{
	char	*line;

	static char *static_buffer = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_buffer = ft_read_chars(fd, static_buffer);
	line = ft_extract_line(static_buffer);
	if (line == NULL)
	{
		printf("Hola");
		return (NULL);
	}
	static_buffer = update_buffer(static_buffer);
	return (line);
}*/