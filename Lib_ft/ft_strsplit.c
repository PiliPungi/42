/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/25 16:22:01 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/15 03:01:45 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_idx(const char *str, char c)
{
	int	nbl;
	int	i;

	i = 0;
	nbl = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			nbl++;
		i++;
	}
	if (str[0] != '\0')
		nbl++;
	return (nbl);
}

static	char	*ft_line(const char *str, char c, int *i)
{
	char	*s;
	int		n;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	n = 0;
	while (str[*i] != c && str[*i])
	{
		s[n] = str[*i];
		n++;
		*i += 1;
	}
	s[n] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(const char *str, char c)
{
	int		i;
	int		j;
	int		wrd;
	char	**s;

	i = 0;
	j = 0;
	if ((!str) || (!c))
		return (NULL);
	wrd = ft_idx(str, c);
	if (!(s = (char **)malloc(sizeof(s) * (ft_idx(str, c) + 2))))
		return (NULL);
	while (str[i] == c && str[i])
		i++;
	while (j < wrd && str[i])
	{
		s[j] = ft_line(str, c, &i);
		j++;
	}
	s[j] = NULL;
	return (s);
}
