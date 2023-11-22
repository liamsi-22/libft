/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:09:17 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/22 19:16:57 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (!little[0])
		return ((char *)(big));
	little_len = ft_strlen(little);
	i = 0;
	while ((i + little_len <= len) && big[i])
	{
		j = 0;
		while (little[j] == big[i + j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
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
