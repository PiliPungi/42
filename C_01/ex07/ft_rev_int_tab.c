/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 02:18:57 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 20:19:57 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_rev_int_tab(int *tab, int size)
{
	int		swap;
	int		curseur;
	int		rebours;

	curseur = 0;
	while (curseur < (size / 2))
	{
		rebours = size - 1 - curseur;
		swap = tab[curseur];
		tab[curseur] = tab[rebours];
		tab[rebours] = swap;
		curseur++;
	}
	return (tab);
}
