/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:52:58 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/08 15:57:42 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_extract_line(char *static_buffer)
{
	size_t	i;
	char	*line;

	i = 0;
	if (static_buffer == NULL)
		return (NULL);
	line = (char *)malloc(ft_strlen(static_buffer) + 1);
	if (line == NULL)
	{
		free(static_buffer);
		return (NULL);
	}
	while (static_buffer[i] != '\n' && static_buffer[i] != '\0')
	{
		line[i] = static_buffer[i];
		i++;
	}
	if (static_buffer[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
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
	{
		free(static_buffer);
		return (NULL);
	}
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
		return (free(static_buffer), NULL);
	while (chars_read > 0)
	{
		chars_read = read(fd, local_buffer, BUFFER_SIZE);
		if (chars_read < 0)
			return (free(local_buffer), free(static_buffer), NULL);
		else if (chars_read > 0)
		{
			local_buffer[chars_read] = '\0';
			temp_buffer = ft_strjoin(static_buffer, local_buffer);
			if (!temp_buffer)
				return (free(local_buffer), NULL);
			else
			{
				free(static_buffer);
				static_buffer = temp_buffer;
			}
		}
	}
	free(local_buffer);
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
		return (free(line), NULL);
	line = ft_extract_line(static_buffer);
	if (!line)
	{
		free(static_buffer);
		static_buffer = NULL;
		return (NULL);
	}
	static_buffer = update_buffer(static_buffer);
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