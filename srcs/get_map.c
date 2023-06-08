/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:14:44 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/25 19:48:39 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	get_map(int size, char *map_name, int fd)
{
	char	*map;

	map = (char *)malloc((sizeof(char) * size));
	map[size - 1] = '\0';
	fd = open(map_name, O_RDONLY);
	read(fd, map, size);
	close(fd);
	ft_var(map);
}

void	read_map(char *map_name)
{
	int		len;
	int		fd;
	int		size;
	char	*ptr;

	size = 0;
	ptr = (char *)malloc((sizeof(char)));
	fd = open(map_name, O_RDONLY);
	if (fd == -1)
		error4();
	len = read(fd, ptr, 1);
	size++;
	if (len < 1)
		error5();
	while (len)
	{
		len = read(fd, ptr, 1);
		size++;
	}
	free(ptr);
	close(fd);
	get_map(size, map_name, fd);
}
