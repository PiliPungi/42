/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:53:28 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 02:30:01 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		l;
	int		i;
	char	*newstr;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (!(newstr = malloc((l + 1) * sizeof(char))))
		return (NULL);
	while (i < l)
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
