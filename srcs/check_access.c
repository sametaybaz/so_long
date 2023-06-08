/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_access.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:24:36 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 12:56:23 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_pe(char *map, int width, int i)
{
	if (map[i + 1] == '1' && map[i - 1] == '1'
		&& map[i + width + 1] == '1' && map[i - width - 1] == '1')
	{
		if (map[i] == 'P')
			error14();
		else if (map[i] == 'E')
			error15();
	}
}

void	check_c(char *map, int width, int i)
{
	if (map[i + 1] == '1' && map[i - 1] == '1'
		&& map[i + width + 1] == '1' && map[i - width - 1] == '1')
		error13();
	else if (map[i + 1] == '1' && map[i - 1] == '1'
		&& map[i - width - 1] == '1' && map[i + width + 1] == 'E'
		&& map[i + width + 1 + width + 1] == '1')
		error13();
	else if (map[i + 1] == '1' && map[i - 1] == '1'
		&& map[i + width + 1] == '1' && map[i - width - 1] == 'E'
		&& map[i - width - 1 - width - 1] == '1')
		error13();
}

void	check_access(char *map, int width)
{
	int	i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'C')
			check_c(map, width, i);
		else if (map[i] == 'P' || map[i] == 'E')
			check_pe(map, width, i);
		i++;
	}
}
