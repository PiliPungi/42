/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 14:50:02 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/16 00:53:24 by pcachin     ###    #+. /#+    ###.fr     */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		ls;
	unsigned int		ld;
	unsigned int		i;

	ls = ft_strlen(src);
	ld = ft_strlen(dest);
	i = 0;
	while ((i < ls) && (i < nb))
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
** 	char	src[] = "0123456789";
** 	char	dest[] = "abcdefgh";
** 	int		nb = 3;
** 	printf("%s \n", ft_strncat(dest, src, nb));
** 	return (0);
** }
*/
