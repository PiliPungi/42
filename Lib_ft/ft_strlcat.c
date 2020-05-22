/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 18:54:30 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 20:05:12 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		t1;
	size_t		t2;

	i = 0;
	t1 = 0;
	t2 = ft_strlen(src);
	if (size == 0)
		return (t2);
	while (dst[t1] && t1 < size)
		t1++;
	if (t1 == size && dst[t1])
		return (t1 + t2);
	while ((t1 + i) < (size - 1) && src[i])
	{
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}
