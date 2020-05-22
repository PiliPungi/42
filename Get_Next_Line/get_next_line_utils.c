/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line_utils.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 04:55:56 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 05:00:53 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		free_ret(char **buf, int ret)
{
	free(*buf);
	return (ret);
}

int		ft_strlen(const char *str)
{
	int l;

	l = 0;
	if (!str)
		return (0);
	while (str[l])
		l++;
	return (l);
}

void	*ft_calloc(size_t i1, size_t i2)
{
	void	*str;
	size_t	i;

	if (!(str = malloc(i1 * i2)))
		return (NULL);
	i = 0;
	while (i < (i1 * i2))
	{
		((unsigned char*)str)[i] = 0;
		i++;
	}
	return (str);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
