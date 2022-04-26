/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmallett <nmallett@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 05:55:57 by nmallett          #+#    #+#             */
/*   Updated: 2022/04/26 12:15:44 by nmallett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_start(char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\n' && str[i])
		i++;
	if (str[0] == '\0')
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * i + 2);
	if (!ptr)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		ptr[i++] = '\n';
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_end(char *str)
{
	int		i[2];
	char	*ptr;

	i[0] = ft_strlen(str);
	i[1] = 0;
	if (!str)
		return (NULL);
	while (str[i[1]] != '\n' && str[i[1]])
		i[1]++;
	if (str[i[1]] == '\0')
	{
		free(str);
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (i[0] - i[1]));
	if (!ptr)
		return (NULL);
	i[0] = 0;
	i[1]++;
	while (str[i[1]])
		ptr[i[0]++] = str[i[1]++];
	ptr[i[0]] = '\0';
	free(str);
	return (ptr);
}

int	ft_nl(char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char	*ft_read_file(int fd, char *buf, char *tmp, char *str)
{
	int		i;

	i = 1;
	while (i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free (buf);
			return (NULL);
		}
		buf[i] = '\0';
		tmp = str;
		if (!tmp)
		{
			tmp = malloc(sizeof(char) * 1);
			tmp[0] = '\0';
		}
		str = ft_strjoin(tmp, buf);
		free(tmp);
		if (ft_nl(str) == 1)
			break ;
	}
	free(buf);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*strtemp[3];

	strtemp[2] = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	strtemp[0] = malloc(BUFFER_SIZE + 1);
	if (!strtemp[0])
		return (NULL);
	str[fd] = ft_read_file(fd, strtemp[0], strtemp[2], str[fd]);
	if (!str[fd])
		return (NULL);
	strtemp[1] = ft_start(str[fd]);
	str[fd] = ft_end(str[fd]);
	return (strtemp[1]);
}
