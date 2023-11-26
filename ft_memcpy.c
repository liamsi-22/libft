/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:57 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/25 19:27:17 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		(*(unsigned char *)(dest + i)) = *(unsigned char *)(src + i);
		i++;
	}
	return ((void *)dest);
}
/*
int main(int ac, char **av)
{
    (void)ac;
    (void)**av;
   	char x[20] = "hello";	
	printf("%s",(char *)ft_memcpy(((void *)0), ((void *)0), 3));
    //printf("%s",(char *)memcpy(NULL, x, 3));
	return 0;
}*/
