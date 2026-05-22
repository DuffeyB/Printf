# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bduffey <bduffey@student.42lisboa.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/13 13:07:17 by bduffey           #+#    #+#              #
#    Updated: 2026/05/15 18:40:30 by bduffey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_c.c ft_printf_str.c ft_printf_hex.c \
	   ft_printf_dec_int.c ft_printf_u.c ft_printf_ptr.c

OBJS = $(SRCS:.c=.o)
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_DIR)
AR = ar rcs
RM = rm -f

#################################RULES######

#---Build libft to access libft.a----------#
all: $(NAME)

#---Builds LIBFT---------------------------#
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
	
#---Archive all object files---------------#
$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS)
	
#---Compiles .c files into .o files--------#
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
#################################TARGETS####

#---Removes all object files---------------#
clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_DIR)

#---Removes object files and arhive--------#
fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)

#---Removes .o files, archive, and rebuilds#
re: fclean all

#---Prevents misuse targets----------------#
.PHONY: all clean fclean re
