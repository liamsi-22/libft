/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:33:37 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/20 21:05:26 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list tmp;
    
    if (lst && del)
    {
        while (*lst != NULL)
        {
            tmp = *lst -> next;
            ft_lstdelone(*lst, del);
            lst -> next = tmp;
        }
    }
}