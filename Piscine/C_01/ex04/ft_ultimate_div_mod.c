/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_div_mod.c                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/07 19:09:24 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 15:59:21 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		vala;
	int		valb;
	float	d;

	vala = *a;
	valb = *b;
	d = vala / valb;
	*a = (int)d;
	*b = vala % valb;
}
