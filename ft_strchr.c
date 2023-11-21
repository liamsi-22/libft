/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:09:35 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/21 18:31:50 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != (char)c) && (*s != '\0'))
		s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
/*
int main()
{
    char x[20] = "silmap";
    char y = '\0';
    printf("%s",ft_strchr(x,y));
    return 0;
}
*/
