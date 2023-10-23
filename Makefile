# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 18:06:49 by lduchemi          #+#    #+#              #
#    Updated: 2023/10/19 16:27:03 by lduchemi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Specify the name of the library and the compiler
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# List of source files and their corresponding object files
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# Default rule to build the library
all: $(NAME)

# Clean rule to remove object files
clean:
	rm -f $(OBJ)

# Fclean rule to remove object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

# Rule to compile individual source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

# Rule to create the library from object files
$(NAME): $(OBJ)
	ar rcs $@ $^
