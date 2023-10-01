# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anguil-l <anguil-l@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 16:29:25 by anguil-l          #+#    #+#              #
#    Updated: 2023/10/01 09:49:54 by anguil-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name
NAME = libft.a

# Flags
FLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = srcs
OBJ_DIR = obj
INC_DIR = include
HEADER = ./include/libft.h
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
			ft_lstiter_bonus.c ft_lstmap_bonus.c ${SRC_FILES}
OBJ_BONUS = ${SRC_BONUS:.c=.o}

# List of source files
SRC_FILES = ft_atoi.c ft_isalpha.c ft_isprint.c ft_memset.c ft_strlen.c ft_tolower.c \
            ft_bzero.c ft_isascii.c ft_memcpy.c ft_strlcat.c ft_strncmp.c ft_toupper.c \
            ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_strchr.c \
            ft_strrchr.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
            ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
            ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Construye la lista de objetos a partir de la lista de archivos fuente
OBJ_FILES = $(SRC_FILES:.c=.o)

# Se compilan los archivos objetos.
all: $(NAME)

# Crea la carpeta donde estarán los objetos.
obj:
	mkdir -p $(OBJ_DIR)

# Regla para compilar archivos objetos desde archivos fuente
%.o: %.c Makefile ${HEADER} 
	gcc $(FLAGS) -I $(INC_DIR) -I include -o $@ -c $<

# Se compilan los objetos en la biblioteca estática libft.a
$(NAME): $(OBJ_FILES)
	ar rc ${NAME} $(OBJ_FILES)
	ranlib $(NAME)
	@echo "(•̀ᴗ•́)و $(NAME) generado!"

# Regla para compilar la biblioteca con funciones bonus
bonus: .bonus

.bonus: $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)
	@echo "(•̀ᴗ•́)و $(NAME) con bonus generado!"
	touch .bonus

# Remueve todos los archivos objetos y la biblioteca estática
clean:
	rm -rf $(OBJ_FILES)
	rm -rf $(OBJ_BONUS)
	@echo "¯\_(ツ)_/¯ Objectos removidos!"

# Remueve todos los archivos objetos, binarios y la biblioteca estática
fclean: clean
	rm -f $(NAME)
	@echo "(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

# Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean all

# Le dice al make que estos nombres no son archivos
.PHONY: all clean fclean re bonus
