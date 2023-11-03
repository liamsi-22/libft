/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:16:40 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/02 13:25:40 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
  size_t i;
  size_t src_len;
  
  i = 0;
  while ((i < size - 1) && src[i])
  {
    dest[i] = src[i];
    i++;
  }
  if (i < size)
    dest[i] = '\0';

  src_len = 0;
  while (src[src_len])
    src_len++;
  return src_len;
}