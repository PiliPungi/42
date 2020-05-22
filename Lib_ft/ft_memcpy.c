/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 18:34:55 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/12 14:22:53 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *s, size_t n)
{
	size_t			t;
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)dst;
	src = (unsigned char *)s;
	t = 0;
	if ((dest == NULL) && (src == NULL) && (n != 0))
		return (dest);
	while (t < n)
	{
		((unsigned char *)dest)[t] = ((unsigned char *)src)[t];
		t++;
	}
	return (dest);
}
