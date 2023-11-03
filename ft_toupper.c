/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:43:34 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/02 18:07:31 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (c - 32);
    else 
        return (c);
}
/*
int main(void)
{
    printf("%c\n",ft_toupper('A'));
    printf("%c\n",ft_toupper('a'));
    printf("%c\n",ft_toupper('B'));
    printf("%c\n",ft_toupper('b'));
    printf("%c\n",ft_toupper(56));
    printf("%c\n",ft_toupper(97));
    printf("%c\n",ft_toupper('+'));
    printf("%c\n",ft_toupper('b'));
}
*/