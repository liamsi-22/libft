/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:43:53 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/21 18:31:01 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
/*
int main(void)
{
    printf("%c\n",ft_tolower('A'));
    printf("%c\n",ft_tolower('a'));
    printf("%c\n",ft_tolower(77));
    printf("%c\n",ft_tolower('z'));
    printf("%c\n",ft_tolower('Z'));
    printf("%c\n",ft_tolower('-'));
}
*/
