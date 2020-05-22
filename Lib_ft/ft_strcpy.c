/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 12:48:24 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 19:03:31 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
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
