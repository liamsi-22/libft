/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:56:24 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/09 18:53:15 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);
    size_t size = len1 + len2 + 1;
    char *res;

    //   if (!s1 && !s2)
    //  return (NULL);
    res = (char *)malloc(size);
    if (res == NULL)
        return (NULL);
    else
    {
        ft_memcpy(res, s1, len1);
        ft_memcpy(res + len1, s2, len2);
        res[size - 1] = '\0';
    }
    return (res);
}
int main()
{
    const char s1[20] = "hello";
    const char s2[20] = " world !";
    printf("%s", ft_strjoin(s1, s2));
    free(ft_strjoin(s1, s1));
}