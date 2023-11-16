/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:57 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/08 21:21:45 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n)
    {
        (*(unsigned char *)(dest + i)) = *(unsigned char *)(src + i);
        i++;
    }
    return ((void *)dest);
}
/*
int main(int ac, char **av)
{
    (void)ac;
    printf("%s",(unsigned char *)ft_memcpy(av[1] + 2,av[1],5));
    return 0;
}
*/