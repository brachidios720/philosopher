# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarbonn <rcarbonn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 19:14:23 by rcarbonn          #+#    #+#              #
#    Updated: 2024/01/22 19:20:42 by rcarbonn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
FL = -Wall -Werror -Wextra
LINK = libft/libft.a
EXE = philo

src = 	main.c \
		parsing.c \

srco = $(src:.c=.o)

all = $(exe)

$(exe): $(srco)
		$(cc) $(fl) $(link) $(srco) -o $(exe)