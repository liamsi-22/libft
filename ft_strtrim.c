/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:05:16 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/22 19:26:13 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	new_len;
	char	*dup;

	start = 0;
	if (!s1 || !set || !*s1)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	new_len = (end - start) + 1;
	dup = (char *)malloc(new_len + 1);
	if (dup == NULL)
		return (NULL);
	else
	{
		ft_memcpy(dup, s1 + start, new_len);
		dup[new_len] = '\0';
	}
	return (dup);
}
/*
int main ()
{
    char s1[90] = "t";
    char set[10] = "t";
    printf("%s",ft_strtrim(s1,set));
}
*/
