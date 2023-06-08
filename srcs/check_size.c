/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:20:49 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:20:51 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_emptyline(char *map)
{
	int	i;

	i = 0;
	if (map[i] == '\n')
		error11();
	while (map[i] != '\0')
	{
		if (map[i] == '\n' && map[i + 1] == '\n')
			error11();
		i++;
	}
	if (map[i - 1] == '\n')
		error11();
	else if (map[i - 1] != '\n' && map[i] == '\0')
		return (1);
	return (0);
}

int	find_height(char *map, t_info *info, int height, int i)
{
	int	width;

	width = 0;
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
		{
			height++;
			if (width != info->width)
				error9();
			width = 0;
		}
		else
			width++;
		i++;
	}
	if (map[i - 1] != '\n')
	{
		if (width != info->width)
			error9();
	}
	return (height);
}

void	get_height(char *map, t_info *info)
{
	int	i;
	int	first_check;
	int	second_check;
	int	height;

	height = 0;
	i = 0;
	first_check = 1;
	second_check = 0;
	if (first_check == 1)
		second_check = check_emptyline(map);
	if (second_check == 1)
		height = find_height(map, info, height, i);
	height++;
	info->height = height;
	check_wall1(map, info);
}

void	get_width(char *map, int count_c)
{
	t_info	info;
	int		i;

	i = 0;
	while (map[i] != '\n')
		i++;
	info.width = i;
	info.count_c = count_c;
	get_height(map, &info);
}
