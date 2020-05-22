/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 15:08:45 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 19:05:09 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	if ((str[0] == '\0') && (to_find[0] == '\0'))
		return (&str[0]);
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
			return (&str[l]);
	}
	return (0);
}
/*
** #include <stdio.h>
** #include <string.h>
**
** int		 main()
** {
** 	char	str[] = "Une voiture qui pollue";
** 	char	to_find[] = "qui ollue";
** 	if (ft_strstr(str, to_find) == 0)
** 		printf("chaine absente\n");
** 	else
** 		printf("%s \n", ft_strstr(str, to_find));
** 	if (strstr(str, to_find) == 0)
** 		printf("chaine absente\n");
** 	else
** 		printf("%s \n", strstr(str, to_find));
** 	return (0);
** }
*/
