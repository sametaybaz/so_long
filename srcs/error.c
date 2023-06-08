/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:21:41 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:21:44 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	error1(void)
{
	write(1, "Error: ./so_long [map-name]\n", 28);
	exit (EXIT_FAILURE);
}

void	error2(void)
{
	write(1, "Error: Your file must be [.ber]\n", 32);
	exit (EXIT_FAILURE);
}

void	error3(void)
{
	write(1, "Error: Must be 2 arguments\n", 27);
	exit (EXIT_FAILURE);
}

void	error4(void)
{
	write(1, "Error: Can't open that file\n", 28);
	exit (EXIT_FAILURE);
}

void	error5(void)
{
	write(1, "Error: File is empty\n", 21);
	exit (EXIT_FAILURE);
}
