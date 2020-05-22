/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 21:22:10 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/11 15:10:12 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(src);
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		lensrc;
	char	*cpy;

	lensrc = ft_strlen(src);
	cpy = (char *)malloc((lensrc + 1) * sizeof(char));
	if (cpy == 0)
		return (cpy);
	ft_strcpy(cpy, src);
	return (cpy);
}
