# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 07:02:18 by berdogan          #+#    #+#              #
#    Updated: 2022/07/27 07:05:10 by berdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
src = ft_strchr.c \
ft_split.c \
ft_strtrim.c \
ft_bzero.c \
ft_strnstr.c \
ft_strmapi.c \
ft_isprint.c \
ft_atoi.c \
ft_strdup.c \
ft_tolower.c \
ft_toupper.c \
ft_substr.c \
ft_striteri.c \
ft_memchr.c \
ft_putnbr_fd.c \
ft_strlcpy.c \
ft_itoa.c \
ft_memset.c \
ft_calloc.c \
ft_strlen.c \
ft_putchar_fd.c \
ft_isascii.c \
ft_strlcat.c \
ft_putendl_fd.c \
ft_memcmp.c \
ft_isdigit.c \
ft_strrchr.c \
ft_putstr_fd.c \
ft_isalpha.c \
ft_strncmp.c \
ft_isalnum.c \
ft_memcpy.c \
ft_memmove.c \
ft_strjoin.c \

all: $(NAME)

$(NAME): obj
	ar -rcs $(NAME) $(obj)
obj: $(src) libft.h
	gcc -Wall -Werror -Wextra -c $(src) -I.
clean:
	rm -rf ./*.o
fclean: clean
	rm -rf $(NAME)
re: fclean all
