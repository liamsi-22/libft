/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:23:59 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/18 14:20:11 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		if (*s == c && (*(s + 1) == '\0' || *(s + 1) != c))
			counter++;
		s++;
	}
	return (counter);
}

static size_t	word_length(const char s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s != c || *s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	size;
	size_t	word_len;
	size_t	i;

	if (!s)
		return (NULL);
	size = count_words(s,c);
	new = (char **)malloc((size + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	i = 0;
	while (*s && i < size)
	{
		if (*s != c)
		{
			word_len = word_length(s,c);
			new[i] = (char *)malloc((word_len + 1) * sizeof(char));
			if (new[i] == NULL)
				return (NULL);
			ft_strlcpy(new[i++], s, word_len + 1);
			s += word_len;
		}
		else
			s++;
	}
	new[i] = NULL;
	return	(new);
}
