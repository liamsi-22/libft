/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:15:50 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/21 18:29:47 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// void example_function(unsigned int index, char *character)
// {
//     (void)index;
//     if (*character >= 'a' && *character <= 'z') {
//         *character = *character - 32;
//     }
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// int main() {
//     char example_string[] = "HelLLLLOOo, World!";

//     ft_striteri(example_string, example_function);
//
//     printf("Modified String: %s\n", example_string);

//     return 0;
// }
