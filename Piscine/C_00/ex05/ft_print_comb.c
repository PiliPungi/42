/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 15:49:04 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/06 18:18:24 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int c, int d, int u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = 48;
	while (c < 58)
	{
		d = 48;
		while (d < 58)
		{
			u = 48;
			while (u < 58)
			{
				if (c < d && d < u)
				{
					ft_display(c, d, u);
					if (c < 55)
						write(1, ", ", 2);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}
