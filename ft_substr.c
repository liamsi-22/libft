/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:41:17 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/19 10:47:05 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *new;
    
    i = 0;
    // if (!s)
    // return (0);
    new = (char *)malloc(len + 1);
    if (new == NULL)
        return (NULL);
    else
    {
        while (i < len && s[start])
        {
            new[i] = s[start];
            i++;
            start++;
        }
        new[i] = '\0';
    }
    return (new);
}
// int main()
// {
//     char const H[20] = "Hello World";
//     printf("%s", ft_substr(H, 6, 3));
// }