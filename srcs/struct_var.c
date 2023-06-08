/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_var.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:22:34 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:22:36 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_var(char *map)
{
	t_var	counts;
	int		count_e;
	int		count_c;
	int		count_p;
	int		count_other;

	count_e = 0;
	count_c = 0;
	count_p = 0;
	count_other = 0;
	counts.count_e = count_e;
	counts.count_c = count_c;
	counts.count_p = count_p;
	counts.count_other = count_other;
	check_count(map, &counts);
}
