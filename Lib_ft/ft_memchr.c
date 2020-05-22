/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 20:45:11 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 17:03:08 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*test;

	test = (unsigned char*)s;
	while (test < (unsigned char*)(s + n))
	{
		if (*test == (unsigned char)c)
			return (test);
		test++;
	}
	return (NULL);
}
