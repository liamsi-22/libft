/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:09:17 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/28 21:33:33 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)(big));
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			while (i + j < len && big[i + j] == little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *)(big + i));
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
    const char b[50] = "hello my name is ismail , nice meeting you !";
    const char l[50] = "is" ;
    if (ft_strnstr(b,l,16)== NULL)
        printf("NULL");
    else
        printf("%s",ft_strnstr(b,l,16));
    return 0;
}
*/
