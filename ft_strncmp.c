/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:26:42 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/06 10:50:34 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && (*s1 == *s2))
    {
        s1++;
        s2++;
        i++;
    }
    if (i == n)
        return (0);
    else
        return (*s1 - *s2);
}
/*
int main()
{
    const char s1[20] = "helludsv";
    const char s2[20] = "hellukd";
    printf("%d",ft_strncmp(s1,s2,8));
    return 0;
}
*/