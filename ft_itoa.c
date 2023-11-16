/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:13:28 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/16 13:45:37 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void dup_fill(char *str, int index, long int x)
{
    str[index] = '\0';
    if (x == 0)
        str[0] = '0';
    else
    {
        if (x < 0)
        {
            x *= -1;
            str[0] = '-';
        }
        while (x != 0)  
        {
            str[--index] = (x % 10) + '0';
            x /= 10;
        }
    }
}
static int n_len(long int x)
{
    int index;

    index = 0;
    if (x == 0)
    {
        index++;
        return index;
    }
    else
    {
        if (x < 0)
            index++;
        while (x != 0)
        {
            x /= 10;
            index++;
        }
    }
    return (index);
}
char *ft_itoa(int n)
{
    int i;
    long int x;
    char *dup;

    x = n;
    i = n_len(x);
    dup = (char *)malloc(i + 1);
    if (dup == NULL)
        return (NULL);
    dup_fill(dup, i, x);
    return (dup);
}
/*
int main()
{
    long long i = -2147483648;
    printf("%s", ft_itoa(i));
}
*/
