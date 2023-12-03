/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:21:01 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/03 16:45:18 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static void	ft_dell(void *x)
{
	(void)x;
	return ;
}
static void *ft_f(void *str)
{
	int i = 0;
	while (((char *)str)[i] != '\0')
	{
		((char *)str)[i] -= 32;
		i++;		
	}
	return ((void *)str);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst -> content));
		if (!new_node)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst ->next;
	}
	return (new_list);
}
/*
int main ()
{
	char y[] = "hello";
	char x[] = "world";
	t_list *new_elem;
	new_elem = ft_lstnew(x);
	new_elem -> next = ft_lstnew(y);
	t_list *mapp = ft_lstmap(new_elem, ft_f, ft_dell);
*/
