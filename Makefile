LIBMLX		=	mlx/libmlx.a

CC			=	gcc

CFlAGS		= 	-Wall -Wextra -Werror

MINILIB		=	mlx

LFLAGS		=	-framework OpenGL -framework AppKit

NAME		=	so_long

SRCS		=	srcs/*.c

all: $(LIBMLX) $(NAME)

$(NAME):	$(SRCS)
			$(CC) $(CFlAGS) $(LFLAGS) $(LIBMLX) $(SRCS) -o $(NAME)
			@echo "FINISHED"

$(LIBMLX):	$(MINILIB)
			make -C $(MINILIB)
			@echo "\nMLX DONE!"

clean:
	rm -rf srcs/*.o mlx/*.o $(LIBMLX)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean re fclean all