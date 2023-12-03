/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:05:16 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/12/03 16:36:08 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dup;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	if (!s1[start])
	{
		dup = ft_strdup("");
		return (dup);
	}
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	dup = (char *)malloc(end - start + 2);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s1 + start, end - start + 2);
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
