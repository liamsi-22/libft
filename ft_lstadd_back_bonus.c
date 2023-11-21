/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:26:09 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/21 16:37:15 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;


    if (!new || !lst)
        return ;
    tmp = *lst;
    if (*lst)
    {
        tmp = ft_lstlast(*lst);
        tmp -> next = new;
    }
    else
        *lst = new;
}