/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:04:07 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/06 12:58:00 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i = 0;
    
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return ((void *)s);
}
/*
int main(int ac,char **av)
{
    (void)ac;
    printf("%s",(unsigned char *)ft_memset(av[1],av[2][0],10));
    return (0);
}
*/