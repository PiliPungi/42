/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 17:26:34 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/17 22:37:49 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*st_fill(char *nstr, char const *s1, char const *s2)
{
	int			lnstr;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	lnstr = 0;
	lnstr = ft_strlen(s1) + ft_strlen(s2);
	while (i < ft_strlen(s1))
	{
		nstr[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		lnstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nstr = NULL;
	if ((s1) && (s2))
	{
		lnstr = ft_strlen(s1) + ft_strlen(s2);
		if (!(nstr = malloc((lnstr + 1) * sizeof(char))))
			return (NULL);
		nstr = st_fill(nstr, s1, s2);
	}
	if ((s1) && (!s2))
		nstr = ft_strdup((char *)s1);
	if ((!s1) && (s2))
		nstr = ft_strdup((char *)s2);
	return (nstr);
}
