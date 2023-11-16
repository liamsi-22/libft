/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:23:54 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/04 10:15:42 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int s_len;

    s_len = ft_strlen(s);
    while (s_len >= 0)
    {
        if (s[s_len] == (char)c)
            return ((char *)(s + s_len));
        s_len--;
    }
    return (NULL);
}
/*
int main(void)
{
    const char x[30] = "helllo ";
    int y = '\0';
    const char *result;
    
    result = ft_strrchr(x, y);
    if (result != NULL)
        printf("%s <--", result);
    else 
        printf("NULL");
    return (0);
}
*/