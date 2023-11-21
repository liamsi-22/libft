/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:07:05 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/21 16:46:43 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int         counter;
    t_list  *tmp;
    
    tmp = lst;
    counter = 0;
    if (lst)
    {
        while (tmp)
        {
            counter++;
            tmp = tmp -> next;
        }
    }
    return (counter);
}