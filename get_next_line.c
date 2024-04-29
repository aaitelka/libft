/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitelka <aaitelka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:02:52 by aaitelka          #+#    #+#             */
/*   Updated: 2024/02/12 23:20:05 by aaitelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*read_line(char *buffer)
{
	char	*line;
	size_t	len;

	len = 0;
	while (buffer[len] && buffer[len] != '\n')
		len++;
	if (ft_strchr(buffer, 10))
		len++;
	if (!len)
		return (NULL);
	line = malloc(len + 1);
	if (!line)
		return (free(buffer), NULL);
	line[len] = '\0';
	while (len--)
		line[len] = buffer[len];
	free(buffer);
	return (line);
}

char	*save_rem(char *line)
{
	char	*reminder;
	size_t	len;

	if (!line)
		return (NULL);
	line = ft_strchr(line, '\n') + 1;
	len = ft_strlen(line);
	if (!len)
		return (NULL);
	reminder = malloc(len + 1);
	if (!reminder)
		return (free(line), NULL);
	reminder[len] = '\0';
	while (len--)
		reminder[len] = line[len];
	return (reminder);
}

void	read_at_nl(int fd, char **line)
{
	char		*buffer;
	ssize_t		ret;

	buffer = (char *)malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return ;
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret == -1)
			return (free(buffer), free(*line), (void)(*line = NULL));
		buffer[ret] = '\0';
		*line = join(*line, buffer);
		if (!*line)
			return (free(buffer));
		if (ft_strchr(*line, 10))
			break ;
	}
	free(buffer);
}

char	*get_next_line(int fd)
{
	static char	*reminder;
	char		*line;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	line = reminder;
	reminder = NULL;
	read_at_nl(fd, &line);
	if (ft_strchr(line, 10))
		reminder = save_rem(line);
	if (!line)
		return (NULL);
	return (read_line(line));
}
