/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:21:01 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:21:03 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_wall2(char *map, int height, int width)
{
	int	i;

	i = 1;
	while (i <= height)
	{
		if (map[(i - 1) * (width + 1)] != '1')
			error12();
		i++;
	}
	i = 1;
	while (i <= height)
	{
		if (map[(i - 1) * (width + 1) + width - 1] != '1')
			error12();
		i++;
	}
}

void	check_wall1(char *map, t_info *info)
{
	int	i;
	int	end_index;

	i = 0;
	while (i < info->width)
	{
		if (map[i] != '1')
			error12();
		i++;
	}
	i = (info->height - 1) * (info->width + 1);
	end_index = i + info->width;
	while (i < end_index)
	{
		if (map[i] != '1')
			error12();
		i++;
	}
	check_wall2(map, info->height, info->width);
	check_access(map, info->width);
	open_window(info->width, info->height, map, info);
}
