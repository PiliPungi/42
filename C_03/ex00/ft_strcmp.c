/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcmp.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/14 14:36:39 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 00:42:52 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
** #include <stdio.h>
** #include <string.h>
**
** int main()
** {
** 	char  s1[] = "s++--2165653213516rbs  z bybyy";
** 	char  s2[] = "s++--2165653213516rbs   bybyybbbb";
**
** 	printf("%d \n", ft_strcmp(s1, s2));
** 	printf("%d", strcmp(s1, s2));
** 	return (0);
** }
*/
