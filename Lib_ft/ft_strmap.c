/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 14:59:53 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 02:28:52 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		newstr[i] = (*f)(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
