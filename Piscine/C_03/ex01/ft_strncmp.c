/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/15 10:59:59 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 03:11:13 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n - 1))
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
**  #include <stdio.h>
**  #include <string.h>
**
**  int main()
**  {
**  	char  s1[] = "";
**  	char  s2[] = "";
**  	unsigned int	n = 5;
**
**  	printf("%d \n", ft_strncmp(s1, s2, n));
**  	printf("%d", strncmp(s1, s2, n));
**  	return (0);
**  }
*/
