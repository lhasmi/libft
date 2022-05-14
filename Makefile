# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lhasmi <lhasmi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 13:30:35 by lhasmi            #+#    #+#              #
#    Updated: 2022/04/10 20:56:25 by lhasmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror
# REMOVE WILDCARD
# Macros are just names, Makefile targets are "file targets" - they are used to build files from other files.
#$(addprefix src/,foo bar) produces the result ‘src/foo src/bar’.I need to make the creation of a dir and make .o go in it
OBJDIR = objdir
OBJS = $(addprefix $(OBJDIR)/,$(SRC:.c=.o))# in the macro SRC, .c should be replaced with .o.
NAME = libft.a
SRC = $(wildcard *.c)
OBJ = $(wildcard *.o)

all: $(NAME)


$(OBJDIR)/%.o:	%.c | $(OBJDIR)
	gcc -c $^ -o $@

$(NAME): $(OBJS)# If the OBJS are newer than libft.a , then create it from the OBJS using :
	ar -crs $(NAME) $(OBJS)

$(OBJDIR):
	mkdir $@
clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME) $(OBJ)

re: fclean all

.PHONY: all, clean, fclean, re, do
# will tell the make tool that the target is fictional,
#	its behavior will not be altered if the file does exist and b) extra stat() will
#	not be called. All targets in Makefile that do not produce an output file with the same name as the target
#	name should be PHONY.
#$(OBJS): $(SRC) | $(OBJDIR)# if the SRC is newer than OBJ then create it from the SRC using this recipe:
#	gcc $(FLAG) -c $(SRC)
