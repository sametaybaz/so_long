/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:22:43 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:22:45 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_fd(int n)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb >= 10)
		ft_putnbr_fd(nb / 10);
	ft_putchar_fd((char)(nb % 10 + 48));
}
