/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescalz <mdescalz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:11:53 by mdescalz          #+#    #+#             */
/*   Updated: 2023/11/04 12:40:30 by mdescalz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char	*ft_extract_line(char *local_buffer, size_t buffer_size)
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
}*/
char	*ft_read_chars(int fd, size_t buffer_size, char *static_buffer)
{
	char	*local_buffer;
	size_t	chars_read;
	size_t	i;
	size_t	j;
	size_t	check;

	check = 0;
	local_buffer = (char *)malloc(buffer_size + 1);
	if (local_buffer == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (static_buffer == NULL) 
	{
		static_buffer = (char *)malloc(buffer_size + 1);
        if (static_buffer == NULL) 
		{
            free(local_buffer);
            return (NULL);
        }
	}
	while (check == 0)
	{
		chars_read = read(fd, local_buffer, buffer_size);
		if (chars_read <= 0)
		{
			free(local_buffer);
			return (NULL);
		}
		i = 0;
		i = 0;
		while (check == 0 && i < chars_read)
		{
			if (local_buffer[i] != '\n')
			{
				static_buffer[j] = local_buffer[i]
				i++;
				j++;
			}
			else if (local_buffer[i] == '\n')
				check = 1;
			else
			{
				hacer string mas grande!!
				check = 1;
			}

		}
	}
	return (static_buffer);
}

char	*get_next_line(int fd)
{
	size_t	buffer_size;
	static char *static_buffer = NULL;
	buffer_size = 5;
	if (fd < 0)
		return (NULL);
	return (ft_read_chars(fd, buffer_size, static_buffer));
}

int	main(void)
{
	int	fd1;

	fd1 = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd1));
	printf("%s", get_next_line(fd1));
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
