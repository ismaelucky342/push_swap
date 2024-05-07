# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 10:57:52 by ismherna          #+#    #+#              #
#    Updated: 2024/05/07 21:25:49 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

CC		= gcc
CFLAGS	= -Werror -Wextra -Wall

LIBFT_PATH	= libft/
LIBFT_NAME	= libft.a
LIBFT		= $(LIBFT_PATH)$(LIBFT_NAME)

INC			=	-I ./includes/\
				-I ./libft/\

SRC_PATH	=	src/
SRC			=	
SRCS		= $(addprefix $(SRC_PATH), $(SRC))

# Objects
OBJ_PATH	= obj/
OBJ			= $(SRC:.c=.o)
OBJS		= $(addprefix $(OBJ_PATH), $(OBJ))

all: $(LIBFT) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJS): $(OBJ_PATH)

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)
	@mkdir $(OBJ_PATH)fractal_sets/
	@mkdir $(OBJ_PATH)color_schemes/

$(LIBFT):
	@echo "Making libft..."
	@make -sC $(LIBFT_PATH)

$(NAME): $(OBJS)
	@echo "Compiling push swap..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(INC) -lXext -lm
	@echo "push_swap ready."
	@echo "██████   █████  ██        ██  ██    ██  ██████   ██████     ██ █     ██    ███████        "
	@echo "  ██    ██      ██ ██  ██ ██  ██    ██  ██       ██    ██   ██  █    ██  ██       ██      "
	@echo "  ██      ██    ██   ██   ██  ████████  ██████   ██████     ██   █   ██  ██       ██      "
	@echo "  ██	    ██  ██        ██  ██    ██  ██       ██    ██   ██    █  ██  ███████████      "
	@echo "██████  █████   ██        ██  ██    ██  ██████   ██    ██   ██     █ ██  ██       ██      "
	@echo "▒ ▒▓▒ ▒ ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒   ▓▒█░░ ▒▓ ░▒▓░░▓  ▒ ▒▓▒ ▒ ░▓░░▓  ▒ ▒▓▒ ▒ ░▓░░▓  ▒ ▒▓▒"
	@echo " ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒    ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒    ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒"
	@echo "                        2024/05/07 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández"
clean:

bonus: all


#remove objects and exeutable file 
clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ_PATH)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@echo "Removing fractol..."
	@rm -f $(NAME)
	@rm -f $(LIBFT_PATH)$(LIBFT_NAME)

re: fclean all

.PHONY: all re clean fclean