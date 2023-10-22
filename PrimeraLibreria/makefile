# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: almorene <almorene@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 20:34:21 by almorene          #+#    #+#              #
#    Updated: 2023/10/10 16:48:26 by almorene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar -rcs
RM = rm -f

CC = gcc
C_FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC	= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c  ft_strnstr.c \
ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_atoi.c \
ft_putchar_fd.c ft_putstr_fd.c ft_substr.c ft_strtrim.c ft_strjoin.c \
ft_putnbr_fd.c ft_putendl_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c \
ft_split.c

SRC_BONUS = ft_lstnew_bonus.c

OBJ	= $(SRC:.c=.o)
BONUS_OBJ = $(SRC_BONUS:.c=.o)
INCLUDE = libft.h

all: $(NAME)


$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)
%.o: %.c 



bonus: $(NAME_BONUS)

$(NAME_BONUS):$(BONUS_OBJ) $(INCLUDE)
	$(LIB) $(NAME_BONUS) $(BONUS_OBJ)
%.o: %.c 
	
	
	$(CC) $(C_FLAGS) -c -o $@ $<

clean: 
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
