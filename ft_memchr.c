/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:47:28 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/16 13:48:01 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    
    i = 0;
    while (i < n) {
        if (*(unsigned char *)(s + i) == (unsigned char)c)
        {
            return (void *)(s + i);
        }
        i++;
    }
    return (NULL);
}
/*
int main (int ac,char **av)
{
    (void)ac;
    printf("%s",(char *)ft_memchr(av[1],av[2][0],5));
}
    */