/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_key.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:21:48 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:21:50 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_left(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->mlx_map[i] != 'P')
		i++;
	if (info->count_c == 0 && info->mlx_map[i - 1] == 'E')
		finish_game(count1, info);
	else if (info->mlx_map[i - 1] == '0'
		|| info->mlx_map[i - 1] == 'C' || info->mlx_map[i - 1] == 'E')
	{
		left_moves(info, count1, i);
		uptade_map(info);
	}
}

void	check_right(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->mlx_map[i] != 'P')
		i++;
	if (info->mlx_map[i + 1] == 'E' && info->count_c == 0)
		finish_game(count1, info);
	else if (info->mlx_map[i + 1] == '0'
		|| info->mlx_map[i + 1] == 'C' || info->mlx_map[i + 1] == 'E')
	{
		right_moves(info, count1, i);
		uptade_map(info);
	}
}

void	check_down(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->mlx_map[i] != 'P')
		i++;
	if (info->mlx_map[i + info->width + 1] == 'E' && info->count_c == 0)
		finish_game(count1, info);
	else if (info->mlx_map[i + info->width + 1] == '0'
		|| info->mlx_map[i + info->width + 1] == 'C'
		|| info->mlx_map[i + info->width + 1] == 'E')
	{
		down_moves(info, count1, i);
		uptade_map(info);
	}
}

void	check_up(t_info *info, int *count1)
{
	int	i;

	i = 0;
	while (info->mlx_map[i] != 'P')
		i++;
	if (info->mlx_map[i - info->width - 1] == 'E' && info->count_c == 0)
		finish_game(count1, info);
	if (info->mlx_map[i - info->width - 1] == '0'
		|| info->mlx_map[i - info->width - 1] == 'C'
		|| info->mlx_map[i - info->width - 1] == 'E')
	{
		up_moves(info, count1, i);
		uptade_map(info);
	}
}

int	event_key(int key, t_info *info)
{
	static int	count1;

	if (key == W)
		check_up(info, &count1);
	else if (key == A)
		check_left(info, &count1);
	else if (key == S)
		check_down(info, &count1);
	else if (key == D)
		check_right(info, &count1);
	else if (key == ESC)
	{
		mlx_destroy_window(info->mlx, info->mlx_win);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
