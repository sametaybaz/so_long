/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_map2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:38:00 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/25 16:32:39 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error15(void)
{
	write(1, "You cant access to exit\n", 24);
	exit(EXIT_FAILURE);
}

void	error14(void)
{
	write(1, "You cant access to exit and collecs\n", 35);
	exit(EXIT_FAILURE);
}

void	error13(void)
{
	write(1, "Error: You cant access to collectible\n", 38);
	exit(EXIT_FAILURE);
}

void	error12(void)
{
	write(1, "Error: Wall is invalid\n", 23);
	exit(EXIT_FAILURE);
}

void	error11(void)
{
	write(1, "Error: There is empty lines\n", 28);
	exit(EXIT_FAILURE);
}
