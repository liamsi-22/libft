/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:41:17 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/28 11:10:59 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;
	int		index;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	index = start;
	while (s[index++] && i < len)
		i++;
	new = (char *)malloc(i + 1);
	if (new == NULL)
		return (NULL);
	else
	{
		i = 0;
		index = start;
		while (i < len && s[index])
			new[i++] = s[index++];
		new[i] = '\0';
	}
	return (new);
}
