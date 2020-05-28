/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/16 14:32:33 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/18 17:32:49 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
	{
		ft_putchar(i + '0');
	}
}
/*
** int   main(void)
** {
** 	ft_putnbr(10);
** 	ft_putchar('\n');
** 	ft_putnbr(-10);
** 	ft_putchar('\n');
** 	ft_putnbr(2147483647);
** 	ft_putchar('\n');
** 	ft_putnbr(-2147483648);
** }
*/
