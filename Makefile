# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 19:14:23 by rcarbonn          #+#    #+#              #
#    Updated: 2024/06/20 14:40:23 by raphaelcarb      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Werror -Wextra
LINK = libft/libft.a
LIBFT_DIR = ./libft
LIBFT_LIB = -lft
EXE = philo
RM = rm -rf

src = 	src/philo.c \
		src/parsing.c \
		src/utils.c \
		src/init.c \

srco = $(src:.c=.o)

all: libft $(EXE)

libft:
	$(MAKE) -C libft

$(EXE): $(srco) $(LINK)
	$(CC) $(CFLAGS) -L$(LIBFT_DIR) $(srco) -o $(EXE) $(LIBFT_LIB)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C libft clean
	$(RM) $(srco)

fclean: clean
	$(MAKE) -C libft fclean
	$(RM) $(EXE)

re: fclean all

.PHONY: all clean fclean re libft