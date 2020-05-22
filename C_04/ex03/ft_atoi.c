/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/18 17:45:02 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 20:36:02 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		res;
	int		sign;

	sign = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1 * sign;
		++str;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		++str;
	}
	return (sign * res);
}
/*
** #include <stdio.h>
** #include <stdlib.h>
**
** int main(int argc, char **argv)
** {
** 	(void) (argc);
** 	printf("ft_atoi : %d \n", ft_atoi(argv[1]));
** 	printf("atoi : %d \n", atoi(argv[1]));
** 	return (0);
** }
*/
