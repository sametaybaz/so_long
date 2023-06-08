/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argc_argv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:20:25 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:20:27 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	check_argc_argv(int argc, char **argv)
{
	char	*map_name;

	if (argc == 1)
		error1();
	else if (argc == 2)
	{	
		map_name = argv[1];
		if (check_map_name(map_name) == 0)
			error2();
		else
			read_map(map_name);
	}
	else
		error3();
}
