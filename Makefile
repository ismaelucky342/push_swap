# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 13:02:25 by ismherna          #+#    #+#              #
#    Updated: 2024/05/17 12:47:02 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

CC		= gcc
CFLAGS	= -Werror -Wextra -Wall -g3

LIBFT_PATH	= libft/
LIBFT_NAME	= libft.a
LIBFT		= $(LIBFT_PATH)$(LIBFT_NAME)

INC			=	-I ./includes/\
				-I ./libft/\

SRC_PATH	=	src/
SRC			=	ps_instructions.c \
				ps_parse.c \
				push_swap.c \
				ksort.c \
				ksort_utils.c \
				stack_utils.c 
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
	@mkdir -p $(OBJ_PATH)
	
$(LIBFT):
	@echo "Making libft..."
	@make -sC $(LIBFT_PATH)

$(NAME): $(OBJS)
	@echo "Compiling push_swap..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX) $(LIBFT) $(INC) -lXext -lX11 -lm
	@echo "push_swap ready."
	@echo "██████   █████  ██        ██  ██    ██  ██████   ██████     ██ █     ██    ███████        "
	@echo "  ██    ██      ██ ██  ██ ██  ██    ██  ██       ██    ██   ██  █    ██  ██       ██      "
	@echo "  ██      ██    ██   ██   ██  ████████  ██████   ██████     ██   █   ██  ██       ██      "
	@echo "  ██	    ██  ██        ██  ██    ██  ██       ██    ██   ██    █  ██  ███████████      "
	@echo "██████  █████   ██        ██  ██    ██  ██████   ██    ██   ██     █ ██  ██       ██      "
	@echo "▒ ▒▓▒ ▒ ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒   ▓▒█░░ ▒▓ ░▒▓░░▓  ▒ ▒▓▒ ▒ ░▓░░▓  ▒ ▒▓▒ ▒ ░▓░░▓  ▒ ▒▓▒"
	@echo " ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒    ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒    ░░ ▒░▓  ░░░ ▒░ ░ ░▒   ▒  ▒▒"
	@echo "                        2024/05/13 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández"
clean:

bonus: all


#remove objects and exeutable file 
clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ_PATH)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@echo "Removing push_swap..."
	@rm -f $(NAME)
	@rm -f $(LIBFT_PATH)$(LIBFT_NAME)

re: fclean all

.PHONY: all re clean fclean