/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:59:28 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/12 17:49:36 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len_s;
    char *new_s;    
    
    len_s = ft_strlen(s);
    new_s = (char *)malloc(len_s + 1);
    if (new_s == NULL)
        return (NULL);
}