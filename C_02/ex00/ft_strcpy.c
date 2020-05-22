/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/09 12:48:24 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/14 12:02:37 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (str[l] != '\0')
		l++;
	return (l);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(src);
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
