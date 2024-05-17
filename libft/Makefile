# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismherna <ismherna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 15:48:04 by ismherna          #+#    #+#              #
#    Updated: 2024/05/13 13:14:49 by ismherna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
INCLUDE	= 	libft.h \


SRC		=	ft_printf.c			\
			ft_ishexdigit.c     \
			ft_isspace.c 		\
			ft_string.c			\
			ft_unsigned.c		\
			ft_number.c			\
			ft_hexadecimals.c	\
			ft_char.c			\
			ft_pointers.c		\
			ft_tolower.c 	\
			ft_putstr_fd.c 	\
			ft_putendl_fd.c 	\
			ft_isalnum.c 	\
			ft_isalpha.c 	\
			ft_isdigit.c 	\
			ft_isascii.c 	\
			ft_isprint.c 	\
			ft_strlen.c 	\
			ft_memset.c 	\
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_putchar_fd.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_substr.c \
			ft_itoa.c \
			ft_split.c \
			ft_strrchr.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_atoi.c \
			ft_strchr.c \
			ft_strtrim.c \
			ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c  \
			ft_ERROR.c \
			ft_atoll.c \
			ft_free_2Xarray.c  \
			ft_index.c \
			ft_insert_sort.c \
			ft_dup_brute_force.c \
			ft_sqrt.c





OBJ		=	${SRC:.c=.o}

CC		=	gcc
RM		=	rm -f
AR		=	ar rc
RN		=	ranlib

CFLAGS	=	-Wall -Wextra -Werror

# Colors
DEF_COLOR   =   \033[0;39m
GRAY        =   \033[0;90m
RED         =   \033[0;91m
GREEN       =   \033[0;92m
YELLOW      =   \033[0;93m
BLUE        =   \033[0;94m
MAGENTA     =   \033[0;95m
CYAN        =   \033[0;96m
WHITE       =   \033[0;97m

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJ} 
	@echo "Compiling .."
	${AR} ${NAME} ${OBJ}
	${RN} ${NAME}
	@echo "$(GREEN)libft compiled!$(DEF_COLOR)"
	@echo "$(BLUE)Compiled Objects:  $(words $(NAME)  ${OBJ})$(DEF_COLOR)"

clean:
	@echo "$(RED)Removing .o  ...$(DEF_COLOR)"
	${RM} ${OBJ}
	@echo "$(BLUE)Deleted Objects: $(words ${OBJ})  ${OBJ}$(DEF_COLOR)"
	@echo "$(GREEN)Done !"

fclean: clean
	@echo "$(RED)Removing libft.a ...$(DEF_COLOR)"	
	${RM} $(NAME)
	@echo "$(BLUE)Deleted Objects:  $(words $(NAME))  $(NAME)$(DEF_COLOR)"
	@echo "$(GREEN)Done !$(DEF_COLOR)"

re: fclean all  
