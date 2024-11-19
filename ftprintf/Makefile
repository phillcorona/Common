# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 19:03:06 by fcorona-          #+#    #+#              #
#    Updated: 2024/10/30 20:21:29 by fcorona-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Arquivos de origem
SRCS = 	ft_printf.c \
	ft_print_nbr.c \
	ft_print_nbr_base.c \
	ft_print_nbr_unsig.c \
	ft_print_num_hex.c \
	ft_print_pchar.c \
	ft_print_pptr.c \
	ft_print_pstr.c

# Gera os arquivos objetos
OBJS = $(SRCS:.c=.o)


# Compilador e flags

NAME = libftprintf.a


CC = cc
CFLAGS = -Wall -Wextra -Werror


#Regras do Makefile  

#Regra para compilar os arquivos .o a partir dos .c

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

#Alvo compilar a biblioteca e os bonus
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)
	
#all = compila os arquivos e cria a biblioteca

all: $(NAME)   

#Regra clean: Remove os arquivo objetos (.o)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

#Regra re: Limpa tudo e recompila

re: fclean all

#Declaracao de alvos (Alias)
.PHONY: all clean fclean re
