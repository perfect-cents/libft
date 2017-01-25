# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bpezeshk <bpezeshk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/17 14:12:17 by bpezeshk          #+#    #+#              #
#    Updated: 2017/01/21 21:32:19 by bpezeshk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
ft_isprint.o ft_isspace.o ft_itoa.o ft_lstadd.o ft_lstdel.o ft_lstdelone.o \
ft_lstdup.o ft_lstdupone.o ft_lstiter.o ft_lstlen.o ft_lstmap.o ft_lstnew.o \
ft_lstpop.o ft_lstpush.o ft_lstshift.o ft_memalloc.o ft_memccpy.o ft_memchr.o \
ft_memcmp.o ft_memcpy.o ft_memdel.o ft_memdup.o ft_memfree.o ft_memjoin.o \
ft_memmove.o ft_memset.o ft_putchar.o ft_putchar_fd.o ft_putendl.o \
ft_putendl_fd.o ft_putlst.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o \
ft_putstr_fd.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o ft_strcpy.o \
ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o ft_striteri.o ft_strjoin.o \
ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmap.o ft_strmapi.o ft_strncat.o \
ft_strncmp.o ft_strncpy.o ft_strndup.o ft_strnequ.o ft_strnew.o ft_strnstr.o \
ft_strntilcpy.o ft_strrchr.o ft_strsplit.o ft_strstr.o ft_strsub.o \
ft_strtrim.o ft_tolower.o ft_toupper.o

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo [AR] $@
	@ar -rc $(NAME) $(OBJ)

%.o: %.c
	@echo [CC] $@
	@gcc $(CFLAGS) -c -o $@ $<

clean:
	@echo [RM] "*.o"
	@rm -f $(OBJ)

fclean: clean
	@echo [RM] $(NAME)
	@rm -f $(NAME)

re: fclean all
