/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:23:59 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/19 13:44:45 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == '\0' || *(s + 1) == c))
			counter++;
		s++;
	}
	return (counter);
}

static size_t	word_length(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s != c && *s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
static int ft_Free(char **s)
{	
	int i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	i;
	size_t j;
	
	if (!s)
		return (NULL);
	new = (char **)malloc((count_words(s,c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j] && i < count_words(s,c))
	{
		if (s[j] != c)
		{
			new[i] = ft_substr(s,j,word_length(s + j,c));
			if (!new[i++])
				ft_Free(new);
			j += word_length(s + j,c);
		}
		else
			j++;
	}
	new[i] = NULL;
	return	(new);
}

// int main(void)
// {
//     char str[90] = "/////welcome";
//     char **split = ft_split(str, '/');
//     int i = 0;
//     while (i < 2)
//     {
//         printf("%s", split[i]);
//         printf("\n");
//         i++;
//     }
// }
