/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:27:12 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/02 14:46:27 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_len;
    size_t dest_len;

    i = 0;
    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    while (((dest_len + i) < size - 1) && src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    if ((dest_len + i) < size)
        dest[dest_len + i] = '\0'; 
    return (dest_len + src_len);
}
/*int main(void)
{
    char dest[20] = "hello";
    char src[20] = " world";
    printf("%zu\n", ft_strlcat(dest, src, 20));
    printf("%s", dest);
    return 0;
}
*/