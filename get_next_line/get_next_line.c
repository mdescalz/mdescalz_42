/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:11:53 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/03 14:17:40 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_extract_line(char *local_buffer, size_t buffer_size)
{
	size_t	i;
	size_t	check;
	char	*new_line;

	new_line = (char *)malloc(buffer_size + 1);
	if (new_line == NULL)
		return (NULL);
	i = 0;
	check = 0;
	while (local_buffer[i] != '\0' && check == 0)
	{
		if (local_buffer[i] == '\n')
		{
			new_line = ft_substr(local_buffer, 0, i);
			check = 1;
		}
		else
			i++;
	}
	return (new_line);
}
char	*ft_read_chars(int fd, size_t buffer_size)
{
	char	*local_buffer;
	size_t	chars_read;
	size_t	i;

	local_buffer = (char *)malloc(buffer_size + 1);
	if (local_buffer == NULL)
		return (NULL);
	i = 0;
	chars_read = read(fd, local_buffer, buffer_size);
	if (chars_read <= 0)
	{
		free(local_buffer);
		return (NULL);
	}
	local_buffer[chars_read] = '\0';
	return (ft_extract_line(local_buffer, buffer_size));
}

char	*get_next_line(int fd)
{
	size_t	buffer_size;

	// static char	*static_buffer;
	buffer_size = 10;
	// static_buffer = (static char *)static_buffer(buffer_size + 1)
	if (fd < 0)
		return (NULL);
	if (ft_read_chars(fd, buffer_size))
	
}

int	main(void)
{
	int	fd1;

	fd1 = open("file.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd1));
	close(fd1);
}

/*
buffer = read(fd, buffer)
line = extract(buffer)
buffer = update_buffer(buffer);
return (line)
*/

/*
Tenemos la funcion prinicpal, con buffer statico.

Se lee el archivo, y se pone su contenido en buffer statico.

Se analiza, y se extrae una nueva linea.

Se prepara el buffer statico para que este listo para ser analizado cuando se vuelva a llamar la funcion. Buffer statico = strjoin del restante de la extraccion
	+ lo nuevo que se lee cuando se vuelve a llamar la funcion

pero, tenemos que preparar el buffer statico para
*/

/*char	*ft_read_chars(int fd, size_t buffer_size)
{
	char	*local_buffer;
	int		check;
	int		i;

	i = 0;
	check = 0;
	count = i + 1;
	while (check == 0)
	{
		local_buffer = read(fd, local_buffer, buffer_size);
		i = 0;
		while (check == 0 || i <= (buffer size - 1) || buffer[i] != '\0')
		{
			if (local_buffer[i] == '\n')
			{
				check = 1;
			}
			else
				i++;
		}
	}
	return (local_buffer);
}
new_line = ft_substring(local_buffer, 0, count);*/
