/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/26 04:20:55 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/11/13 21:02:07 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	intlen(long int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int				len;
	unsigned int	nb;
	char			*str_nbr;

	if (n == 0)
		return (ft_strdup("0"));
	len = intlen((long int)n);
	nb = n;
	if (!(str_nbr = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		nb = -n;
		str_nbr[0] = '-';
	}
	str_nbr[len] = '\0';
	len--;
	while (nb > 0)
	{
		str_nbr[len] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
	return (str_nbr);
}
