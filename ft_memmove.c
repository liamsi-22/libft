/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:04:02 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/25 19:28:49 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src >= dest)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (n > 0)
		{
			n--;
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
		}
	}
	return ((void *)dest);
}
/*
int main(int ac, char **av)
{
    (void)ac;
    printf("%s",(unsigned char *)ft_memmove(av[1],av[2],6));
    return 0;
}
int main(int ac, char **av)
{
    (void)ac;
    printf("%s", (unsigned char *)ft_memmove(av[1] + 3, av[1], 5));
    return 0;
}
int main() {
    char str[30] = "Hello, Memmove Test!";
    ft_memmove(str + 7, str, 10);  // Overlapping move
    printf("Result: %s\n", str);  // Output the moved string
    return 0;
}
*/
