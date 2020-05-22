/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/12 16:07:32 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/13 16:26:06 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (*(str + i) != 0)
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = (str[i] + 32);
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != 0)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			if (i == 0)
				str[i] = (str[i] - 32);
			else if (str[i - 1] < 48)
				str[i] = (str[i] - 32);
			else if ((str[i - 1] > 57) && (str[i - 1] < 65))
				str[i] = (str[i] - 32);
			else if ((str[i - 1] > 90) && (str[i - 1] < 97))
				str[i] = (str[i] - 32);
			else if (str[i - 1] > 122)
				str[i] = (str[i] - 32);
		}
		i++;
	}
	return (str);
}
