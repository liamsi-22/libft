/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd..c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:56:56 by iel-fagh          #+#    #+#             */
/*   Updated: 2023/11/16 14:51:37 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putchar_fd('-',fd);
        ft_putstr_fd("2147483648",fd);
        return ;
    }
    if (n < 0)
    {
        ft_putchar_fd('-',fd);
        n *= -1;
    }
    if (n > 9)
        ft_putnbr_fd((n / 10),fd);
    ft_putchar_fd((n % 10) + '0',fd);
}