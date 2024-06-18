# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raphaelcarbonnel <raphaelcarbonnel@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 19:14:23 by rcarbonn          #+#    #+#              #
#    Updated: 2024/06/19 00:23:14 by raphaelcarb      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Werror -Wextra
LINK = libft/libft.a
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
	$(CC) $(CFLAGS) $(LINK) $(srco) -o $(EXE)

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