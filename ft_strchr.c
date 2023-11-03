/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:09:35 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/03 16:39:21 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(char *s, int c)
{
    while ((*s != c) && (*s != '\0'))
        s++;
    if (*s)
        return (s);
    else 
        return (NULL);
}
/*
int main()
{
    char x[20] = "silmap";
    char y = 's';
    printf("%s",ft_strchr(x,y));
    return 0;
}
*/