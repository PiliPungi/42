/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 12:12:10 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/15 14:46:03 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str++ != '\0')
		l++;
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int		ls;
	int		ld;
	int		i;

	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	i = 0;
	while (i < ls)
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	return (dest);
}
/*
** #include <stdio.h>
** #include <string.h>
**
** int main(void)
** {
** 	char  src[] = "0123456789";
**  char  dest[] = "abcdefgh";
**
** 	printf("%s \n", ft_strcat(dest, src));
**  return (0);
** }
*/
