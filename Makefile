EXEC	= libft.a
CC		= gcc
SOCC	= gcc -c
CFLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs
SRC		= ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_intlen.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isws.c \
			ft_itoa.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strsdup.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_wc.c
OBJ		= $(SRC:.c=.o)
RM		= rm -f

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC) libft.h
	$(LIB) $(EXEC) $(OBJ)

so:
	$(SOCC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
