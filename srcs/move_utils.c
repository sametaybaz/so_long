/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:53:24 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/25 17:54:40 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	finished_message(int n)
{
	write(1, "Congrats You finished!\n", 23);
	write(1, "total step:", 11);
	ft_putnbr_fd(n);
	write(1, "\n", 1);
}

void	finish_game(int *count1, t_info *info)
{
	(*count1)++;
	finished_message(*count1);
	mlx_destroy_window(info->mlx, info->mlx_win);
	exit(EXIT_SUCCESS);
}

void	uptade_map(t_info *info)
{
	mlx_clear_window(info->mlx, info->mlx_win);
	create_all(info);
}

void	write_step(int *count1)
{
	ft_putnbr_fd(*count1);
	write(1, "\n", 1);
}
