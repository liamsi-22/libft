/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:26:09 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/20 19:29:23 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list tmp;

    tmp = *lst;
    if (new && lst)
    {
        while (tmp -> next != NULL)
            tmp = tmp -> next;
    }
    tmp -> next = new;
}