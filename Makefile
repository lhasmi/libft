# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:30:35 by lhasmi            #+#    #+#              #
#    Updated: 2022/06/12 13:48:14 by lhasmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror
OBJDIR = objdir
OBJS = $(addprefix $(OBJDIR)/,$(SRC:.c=.o))
NAME = libft.a
SRC =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c
OBJ = $(SRC:.c=.o)

all: $(NAME)


$(OBJDIR)/%.o:	%.c | $(OBJDIR)
	gcc -c $^ -o $@

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

$(OBJDIR):
	mkdir $@
clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all, clean, fclean, re, do
