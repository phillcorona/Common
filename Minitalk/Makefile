# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcorona- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 09:42:39 by fcorona-          #+#    #+#              #
#    Updated: 2025/01/29 20:36:45 by fcorona-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nome da compilacao
SERVER = server
CLIENT = client

#Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

# Fontes principais
SRCS_SERVER = src/server.c
SRCS_CLIENT = src/client.c

# Objetos derivados dos fontes
OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

# Caminho da biblioteca ft_printf
FT_PRINTF_DIR = ./ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

# Regras principais
all: $(SERVER) $(CLIENT)

# Regras para o servidor (link a libftprintf.a)
server:	$(OBJS_SERVER) $(FT_PRINTF)
	$(CC) $(CFLAGS)	-o server $(OBJS_SERVER) $(FT_PRINTF)

# Regras para o cliente (não precisa da libftprintf.a)
client:	$(OBJS_CLIENT)
	$(CC) $(CFLAGS) -o client $(OBJS_CLIENT) $(FT_PRINTF)	

# Compilação da libftprintf.a
$(FT_PRINTF):
	make -C $(FT_PRINTF_DIR)

# Limpeza de objetos
clean:
	$(RM) $(OBJS_SERVER) $(OBJS_CLIENT)
	make clean -C $(FT_PRINTF_DIR)

# Limpeza completa
fclean:	clean
	$(RM) server client
	make fclean -C $(FT_PRINTF_DIR)
	
# Recompilação total
re: fclean all

# Recompilação total
	.PHONY fclean all clean re
