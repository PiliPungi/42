/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb2.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/06 16:24:24 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 18:19:15 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display2(int n1, int n2)
{
	int d1;
	int u1;
	int d2;
	int u2;

	d1 = (n1 / 10) + 48;
	u1 = (n1 % 10) + 48;
	d2 = n2 / 10 + 48;
	u2 = n2 % 10 + 48;
	write(1, &d1, 1);
	write(1, &u1, 1);
	write(1, " ", 1);
	write(1, &d2, 1);
	write(1, &u2, 1);
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			if (n1 != n2)
			{
				ft_display2(n1, n2);
				if (n1 < 98)
					write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
int main()
{
	ft_print_comb2();
}
