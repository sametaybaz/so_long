/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:21:33 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:21:35 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error6(void)
{
	write(1, "Error: The map must contain 1 exit\n", 34);
	exit (EXIT_FAILURE);
}

void	error7(void)
{
	write(1, "Error: Collectible for a map must be 1 or more\n", 47);
	exit (EXIT_FAILURE);
}

void	error8(void)
{
	write(1, "Error: Starting position must be 1\n", 35);
	exit (EXIT_FAILURE);
}

void	error9(void)
{
	write(1, "Error: Maps width and height is incorrect\n", 42);
	exit (EXIT_FAILURE);
}

void	error10(void)
{
	write(1, "Error: Other symbol\n", 20);
	exit (EXIT_FAILURE);
}
