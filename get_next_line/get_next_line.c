/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:52:58 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/24 13:34:49 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_extract_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*update_buffer(char *static_buffer)
{
	size_t	i;
	size_t	j;
	char	*new_buffer;

	i = 0;
	j = 0;
	new_buffer = (char *)malloc(ft_strlen(static_buffer) + 1);
	if (new_buffer == NULL)
		return (NULL);
	while (static_buffer[i] != '\n' && static_buffer[i] != '\0')
		i++;
	if (static_buffer[i] == '\n')
		i = i + 1;
	while (static_buffer[i] != '\0')
	{
		new_buffer[j] = static_buffer[i];
		i++;
		j++;
	}
	new_buffer[j] = '\0';
	free(static_buffer);
	return (new_buffer);
}

char	*ft_read_chars(int fd, char *static_buffer)
{
	char	*local_buffer;
	int		chars_read;
	char	*temp_buffer;

	chars_read = 1;
	local_buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (local_buffer == NULL)
		return (NULL);
	while (chars_read > 0)
	{
		chars_read = read(fd, local_buffer, BUFFER_SIZE);
		if (chars_read < 0)
		{
			free(local_buffer);
			return (NULL);
		}
		else if (chars_read > 0)
		{
			local_buffer[chars_read] = '\0';
			temp_buffer = ft_strjoin(static_buffer, local_buffer);
			if (!temp_buffer)
			{
				free(local_buffer);
				return (NULL);
			}
			else
			{
				free(static_buffer);
				static_buffer = temp_buffer;
			}
		}
	}
	free (local_buffer);
	return (static_buffer);
}

char	*get_next_line(int fd)
{
	static char	*static_buffer = NULL;
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_buffer = ft_read_chars(fd, static_buffer);
	if (!static_buffer)
		return (NULL);
	line = ft_extract_line(static_buffer);
	if (!line)
	{
		free(static_buffer);
		static_buffer = NULL;
		return (NULL);
	}
	static_buffer = update_buffer(static_buffer);
	if (!static_buffer)
	{
		free (line);
		return (NULL);
	}
	if (!line[0] && !static_buffer[0])
	{
		free(line);
		free(static_buffer);
		static_buffer = NULL;
		return (NULL);
	}
	return (line);
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