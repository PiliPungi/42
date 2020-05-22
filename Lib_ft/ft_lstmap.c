/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: pcachin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 21:43:13 by pcachin      #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 21:52:55 by pcachin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*result;
	t_list	*newfirst;

	if ((!(lst)) || (!(f)))
		return (NULL);
	result = f(lst);
	if (!(new = ft_lstnew(result->content, result->content_size)))
		return (NULL);
	newfirst = new;
	lst = lst->next;
	while (lst)
	{
		result = f(lst);
		if (!(new->next = ft_lstnew(result->content, result->content_size)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (newfirst);
}
