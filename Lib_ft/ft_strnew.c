/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/23 21:45:54 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 21:28:17 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	crsr;

	newstr = malloc(size + 1);
	if (newstr == NULL)
		return (NULL);
	crsr = 0;
	while (crsr <= size)
	{
		newstr[crsr] = '\0';
		crsr++;
	}
	return (newstr);
}
