/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:36:45 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/09 19:04:27 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *dup;
    size_t s_len;

    s_len = ft_strlen(s);
    dup = (char *)malloc(s_len + 1);
    if (dup == NULL)
    {
        errno = ENOMEM;
        return (NULL);
    }
    else
    {
        ft_memcpy(dup, s, s_len);
        /*   while (s[i])
           {
               dup[i] = s[i];
               i++;
           }
       */
        dup[s_len] = '\0';
    }
    return ((char *)dup);
}

int main()
{
    const char x[50] = "hello world !";
    printf("%s", ft_strdup(x));
    free(ft_strdup(x));
    return 0;
}
