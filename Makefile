# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 09:34:51 by anguil-l          #+#    #+#              #
#    Updated: 2023/10/01 09:35:02 by anguil-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del programa
NAME = libftprintf.a

# Flags de compilación
FLAGS = -Wall -Wextra -Werror

# Directorios
SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = include/
LIBFT_DIR = libft/

# Archivos fuentes y objetos
SRC_FILES = $(wildcard $(SRC_DIR)*.c)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

# Bibliotecas
LIBFT = $(LIBFT_DIR)libft.a

# Compilador
CC = gcc

# Flags para el compilador
CFLAGS = -I$(INC_DIR) $(FLAGS)

# Regla por defecto
all: $(NAME)

# Crea la carpeta donde estarán los objetos
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Compila los archivos fuente en objetos
$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Compila la biblioteca libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Crea la biblioteca libftprintf.a
$(NAME): $(OBJ_FILES) $(LIBFT)
	ar rcs $(NAME) $(OBJ_FILES) $(LIBFT)

# Limpia los objetos
clean:
	rm -rf $(OBJ_DIR)

# Limpia objetos y archivos binarios
fclean: clean
	rm -f $(NAME)

# Regenera todo
re: fclean all

# No tratar como archivos
.PHONY: all clean fclean re

