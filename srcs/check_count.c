/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_count.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:13:30 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 13:52:50 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_count(char *map, t_var *counts)
{
	int	i;

	i = 0;
	while (map[i++] != '\0')
	{
		if (map[i] == 'E')
			counts->count_e++;
		else if (map[i] == 'C')
			counts->count_c++;
		else if (map[i] == 'P')
			counts->count_p++;
		else if (map[i] != '0' && map[i] != '1'
			&& map[i] != 'E' && map[i] != 'C'
			&& map[i] != 'P' && map[i] != '\n' && map[i] != '\0')
			counts->count_other++;
	}
	if (counts->count_e != 1)
		error6();
	if (counts->count_c < 1)
		error7();
	if (counts->count_p != 1)
		error8();
	if (counts->count_other > 0)
		error10();
	get_width(map, counts->count_c);
}
