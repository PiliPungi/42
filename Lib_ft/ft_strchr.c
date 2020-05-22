/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/22 20:58:25 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/12 16:20:45 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		l;
	char	*str;

	l = 0;
	str = (char *)s;
	while (str[l] != '\0')
	{
		if (str[l] != c)
		{
			if (str[l + 1] == '\0')
			{
				if (c == '\0')
					return (str + l + 1);
				return (0);
			}
		}
		else
			return (str + l);
		l++;
	}
	return (0);
}
