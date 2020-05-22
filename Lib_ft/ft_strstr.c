/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 15:08:45 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/01 23:38:20 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

static char		*st_search(char *str, char *to_find)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	while (str[l + i] != '\0')
	{
		while (to_find[i] != '\0')
		{
			if (str[l + i] != to_find[i])
			{
				if (str[i + l] == '\0')
					return (0);
				i = 0;
				l++;
			}
			else
				i++;
		}
		if (to_find[i] == '\0')
			return (str + l);
	}
	return (0);
}

char			*ft_strstr(const char *s, const char *t)
{
	char	*str;
	char	*to_find;
	char	*chat;

	str = (char *)s;
	to_find = (char *)t;
	if ((str[0] == '\0') && (to_find[0] == '\0'))
		return (str);
	chat = st_search(str, to_find);
	return (chat);
}
