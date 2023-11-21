/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:56:24 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/21 19:01:46 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	size;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	size = len1 + len2 + 1;
	res = (char *)malloc(size);
	if (res == NULL)
		return (NULL);
	else
	{
		ft_memcpy(res, s1, len1);
		ft_memcpy(res + len1, s2, len2);
		res[size - 1] = '\0';
	}
	return (res);
}
/*
int main()
{
    const char s1[20] = "hello";
    const char s2[20] = " world !";
    printf("%s", ft_strjoin(s1, s2));
}
*/
