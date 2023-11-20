/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:39:08 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/20 18:45:02 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    node -> content = content;
    node -> next = NULL;
    return (node);
}



