# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 07:34:35 by ismherna          #+#    #+#              #
#    Updated: 2024/07/08 20:06:43 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = gcc
CFLAGS  = -Werror -Wextra -Wall -g

LIBFT_PATH  = libft/
LIBFT_NAME  = libft.a
LIBFT       = $(LIBFT_PATH)$(LIBFT_NAME)

INC     = -I ./includes/ \
          -I ./libft/

SRC_PATH    = src/
SRC         = ps_inst.c \
			  ps_inst2.c \
              ps_parse.c \
              ps_sort_utils.c \
              ps_sort.c \
              ps_stack.c \
              push_swap.c
SRCS        = $(addprefix $(SRC_PATH), $(SRC))

# Objects
OBJ_PATH    = obj/
OBJ         = $(SRC:.c=.o)
OBJS        = $(addprefix $(OBJ_PATH), $(OBJ))

NAME        = push_swap

GREEN = \033[0;32m
RESET = \033[0m

all: $(LIBFT) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c | $(OBJ_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(LIBFT):
	@echo "Making libft..."
	@make -sC $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
	@echo "Compiling $(NAME)..."
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(INC) -lm
	@echo "$(NAME) ready."
	@echo "													"	
	@echo "$(GREEN)██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗$(RESET)	" 
	@echo "$(GREEN)██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗$(RESET)	"
	@echo "$(GREEN)██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝$(RESET)	"
	@echo "$(GREEN)██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝ $(RESET)	"
	@echo "$(GREEN)██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║   $(RESET)	"  
	@echo "$(GREEN)╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝   $(RESET)	"  
	@echo "               2024/05/25 - ismherna@student.42.fr - 42 Madrid - Ismael Hernández		"

clean:
	@echo "Removing .o object files..."
	@rm -rf $(OBJ_PATH)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -f $(NAME)
	@rm -f $(LIBFT_PATH)$(LIBFT_NAME)

re: fclean all

.PHONY: all re clean fclean
