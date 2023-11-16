/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:49:24 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/13 17:18:48 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static char f(unsigned int i, char c)
// {
//     (void)i;
//     return ft_toupper(c);
// }
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len_s;
    char *new_s;    
    int i;
    
    i = 0;
    // if (!s || !f)
    //      return (NULL);
    len_s = ft_strlen(s);
    new_s = (char *)malloc(len_s + 1);
    // Memory Allocation Check !
    if (new_s == NULL)
        return (NULL);

    while( i != len_s)
    {
        new_s[i] = f(i,s[i]);
        i++;
    }
    new_s[i] = '\0';
    return (new_s);
}
// int main()
// {
//     char H[50] = "heLlO WoRlD !";
//     printf("%s",ft_strmapi(H,f));
// }