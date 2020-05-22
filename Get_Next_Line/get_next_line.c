/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/20 00:45:57 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/19 19:04:49 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*st_extendline(char **line)
{
	int		i;
	char	*newline;

	newline = *line;
	i = ft_strlen(newline);
	i += BUFFER_SIZE + 1;
	if (!(*line = ft_calloc(i, sizeof(char))))
		return (NULL);
	*line = ft_strcpy(*line, newline);
	free(newline);
	return (*line);
}

static int		st_testline(char *line, char *s, char *save)
{
	int	i;
	int j;

	i = 0;
	j = ft_strlen(line);
	while (s[i])
	{
		if (s[i] == '\n')
		{
			save = ft_strcpy(save, &s[i + 1]);
			return (1);
		}
		line[j + i] = s[i];
		i++;
	}
	return (0);
}

int				get_next_line(int fd, char **line)
{
	char			*buf;
	static char		tmp[BUFFER_SIZE + 1];
	int				ret;

	if (!(buf = ft_calloc((BUFFER_SIZE + 1), sizeof(char))))
		return (-1);
	if (!(*line = ft_calloc((BUFFER_SIZE + 1), sizeof(char))))
		return (free_ret(&buf, -1));
	if (st_testline(*line, tmp, tmp))
		return (free_ret(&buf, 1));
	while ((ret = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (*line && ft_strlen(*line) != 0)
			st_extendline(line);
		if (st_testline(*line, buf, tmp))
			return (free_ret(&buf, 1));
	}
	if (ret == -1)
	{
		free(buf);
		return (-1);
	}
	tmp[0] = 0;
	return (free_ret(&buf, 0));
}
