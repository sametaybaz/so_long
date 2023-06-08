/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:49:46 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/25 20:27:12 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	left_moves(t_info *info, int *count1, int i)
{
	if (info->mlx_map[i - 1] == 'C')
		info->count_c = info->count_c - 1;
	if (info->mlx_map[i - 1] == '0' || info->mlx_map[i - 1] == 'C')
	{
		info->mlx_map[i - 1] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
		write_step(count1);
	}
	if (info->mlx_map[i - 1] == 'E' && info->mlx_map[i - 2] != '1')
	{
		if (info->mlx_map[i - 2] == 'C')
			info->count_c = info->count_c - 1;
		info->mlx_map[i - 2] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
	}
}

void	right_moves(t_info *info, int *count1, int i)
{
	if (info->mlx_map[i + 1] == 'C')
		info->count_c = info->count_c - 1;
	if (info->mlx_map[i + 1] == '0' || info->mlx_map[i + 1] == 'C')
	{
		info->mlx_map[i + 1] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
	}
	if (info->mlx_map[i + 1] == 'E' && info->mlx_map[i + 2] != '1')
	{
		if (info->mlx_map[i + 2] == 'C')
			info->count_c = info->count_c - 1;
		info->mlx_map[i + 2] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
	}
}

void	down_moves(t_info *info, int *count1, int i)
{
	if (info->mlx_map[i + info->width + 1] == 'C')
		info->count_c = info->count_c - 1;
	if (info->mlx_map[i + info->width + 1] == '0'
		|| info->mlx_map[i + info->width + 1] == 'C')
	{
		info->mlx_map[i + info->width + 1] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
	}
	if (info->mlx_map[i + info->width + 1] == 'E'
		&& info->mlx_map[i + info->width + 1 + (info->width + 1)] != '1')
	{
		if (info->mlx_map[(i + info->width + 1) + (info->width + 1)] == 'C')
			info->count_c = info->count_c - 1;
		info->mlx_map[i + info->width + 1 + (info->width + 1)] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
	}
}

void	up_moves(t_info *info, int *count1, int i)
{
	if (info->mlx_map[i - info->width - 1] == 'C')
		info->count_c = info->count_c - 1;
	if (info->mlx_map[i - info->width - 1] == '0'
		|| info->mlx_map[i - info->width - 1] == 'C')
	{
		info->mlx_map[i - info->width - 1] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
	}
	if (info->mlx_map[i - info->width - 1] == 'E'
		&& info->mlx_map[i - info->width - 1 - info->width - 1] != '1')
	{
		if (info->mlx_map[i - info->width - 1 - info->width - 1] == 'C')
			info->count_c = info->count_c - 1;
		info->mlx_map[i - info->width - 1 - info->width - 1] = 'P';
		info->mlx_map[i] = '0';
		(*count1)++;
		ft_putnbr_fd(*count1);
		write(1, "\n", 1);
	}
}
