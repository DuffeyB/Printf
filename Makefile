# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/13 13:07:17 by bduffey           #+#    #+#              #
#    Updated: 2026/05/13 13:25:33 by bduffey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftiprintf.a

SRCS = ft_printf.c ft_printf_chr.c ft_printf_str.c ft_print_hex.c \
	   ft_printf_dec_int.c ft_printf_u.c

OBJS = $(SRCS:.c=.o)
LIBFT_DIR = libft/
LIBFT = $(LIBFT_DIR)libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(LIBFT_DIR)
AR = ar rcs
RM = rm -f

#################################ACTIONS####

#---Compiles .c files into .o files--------#
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#---Archive all object files---------------#
$(NAME): $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)

#---Build libft to access libft.a----------#
all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
#################################TARGETS####

#---Removes all object files---------------#
clean:
	$(RM) $(OBJS)

#---Removes object files and arhive--------#
fclean: clean
	$(RM) $(NAME)

#---Removes .o files, archive, and rebuilds#
re: fclean all

#---Prevents misuse targets----------------#
.PHONY: all clean fclean re
