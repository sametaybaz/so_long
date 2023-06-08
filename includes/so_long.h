/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaybaz <aaybaz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 15:22:55 by aaybaz            #+#    #+#             */
/*   Updated: 2023/05/26 15:22:57 by aaybaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# define W 13
# define A 0
# define S 1
# define D 2
# define ESC 53

# include "../mlx/mlx.h"
# include <math.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_info
{
	void	*mlx_win;
	void	*mlx;
	int		height;
	int		width;
	char	*mlx_map;
	int		count_c;
}t_info;

typedef struct s_var
{
	int	count_e;
	int	count_c;
	int	count_p;
	int	count_other;
}t_var;

int		check_emptyline(char *map);
void	finished_message(int n);
int		check_map_name(char *str);
void	ft_putnbr_fd(int n);
void	ft_putchar_fd(char c);
void	read_map(char *map_name);
void	error1(void);
void	error2(void);
void	error3(void);
void	error4(void);
void	error5(void);
void	check_argc_argv(int argc, char **argv);
void	check_count(char *map, t_var *counts);
void	error6(void);
void	error7(void);
void	error8(void);
void	get_width(char *map, int count_c);
void	error9(void);
void	check_wall1(char *map, t_info *info);
void	check_wall2(char *map, int height, int width);
void	error10(void);
void	error11(void);
void	error12(void);
void	error13(void);
void	error14(void);
void	error15(void);
void	open_window(int w, int h, char *map, t_info *info);
void	create_wall(int i, int heigth, t_info *info);
void	create_exit(int i, int heigth, t_info *info);
void	create_empty(int i, int heigth, t_info *info);
void	create_collec(int i, int heigth, t_info *info);
void	create_player(int i, int heigth, t_info *info);
int		event_key(int key, t_info *info);
void	create_all( t_info *info);
void	check_up(t_info *info, int *count1);
void	check_down(t_info *info, int *count1);
void	check_right(t_info *info, int *count1);
void	check_left(t_info *info, int *count1);
void	left_moves(t_info *info, int *count1, int i);
void	right_moves(t_info *info, int *count1, int i);
void	down_moves(t_info *info, int *count1, int i);
void	up_moves(t_info *info, int *count1, int i);
int		close_prog(void);
void	get_map(int size, char *map_name, int fd);
void	ft_var(char *map);
void	get_height(char *map, t_info *info);
void	check_access(char *map, int width);
void	finish_game(int *count1, t_info *info);
void	uptade_map(t_info *info);
void	write_step(int *count1);

#endif
