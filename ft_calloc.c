/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:36:37 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/09 13:12:38 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *mem;
    size_t sum;
    
    sum = nmemb * size;
   // if (nmemb == 0 || size == 0)
    //    malloc(1);
    if (nmemb == 0 || size == 0)
        return (NULL);
    mem = (void *)malloc(nmemb * size);
    if (mem == NULL)
        return (NULL);
    ft_bzero(mem,sum);
    return (mem);
}
