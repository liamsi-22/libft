/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:22:41 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/21 15:48:20 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *tmp;

    tmp = lst;
    
    if (tmp)
    {
        while (tmp -> next != NULL)
            tmp = tmp -> next;
    }
    return (tmp);
}