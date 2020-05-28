/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_int_tab.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/08 15:16:18 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/08/08 19:35:30 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	curseur;
	int	swap;

	curseur = 0;
	while (curseur < size)
	{
		if (tab[curseur] > tab[curseur + 1])
		{
			swap = tab[curseur + 1];
			tab[curseur + 1] = tab[curseur];
			tab[curseur] = swap;
			curseur = 0;
		}
		else
			curseur++;
	}
}
