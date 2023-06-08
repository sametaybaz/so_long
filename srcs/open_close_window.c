/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_close_window.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:22:17 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:59:14 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	create_all(t_info *info)
{
	int	i;
	int	height;

	i = 0;
	height = 0;
	while (info->mlx_map[i] != '\0')
	{
		if (info->mlx_map[i] == '1')
			create_wall(i, height, info);
		else if (info->mlx_map[i] == 'E')
			create_exit(i, height, info);
		else if (info->mlx_map[i] == '0')
			create_empty(i, height, info);
		else if (info->mlx_map[i] == 'C')
			create_collec(i, height, info);
		else if (info->mlx_map[i] == 'P')
			create_player(i, height, info);
		else if (info->mlx_map[i] == '\n')
			height++;
		i++;
	}
}

int	close_prog(void)
{
	exit(EXIT_SUCCESS);
}

void	open_window(int w, int h, char *map, t_info *info)
{
	info->mlx = mlx_init();
	info->mlx_win = mlx_new_window(info->mlx, w * 50, h * 50, "So_long!");
	info->mlx_map = map;
	create_all(info);
	mlx_key_hook(info->mlx_win, event_key, info);
	mlx_hook(info->mlx_win, 17, 42, close_prog, &info);
	mlx_loop(info->mlx);
}
