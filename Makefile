EXEC	= libft.a
CC		= gcc
SOCC	= gcc -c
CFLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs
SRC		= 	ft_atoi.c \
			ft_abs.c \
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
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr.c \
			ft_putnbr_base.c \
			ft_putnbr_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
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
BSRC	= 	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstlast.c \
			ft_lstnew.c \
			ft_lstsize.c
BOBJ	= $(BSRC:.c=.o)
RM		= rm -f

all: $(EXEC) bonus

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)
	$(LIB) $(EXEC) $(OBJ)

bonus: $(BOBJ)
	$(CC) $(CFLAGS) -c $(BSRC)
	$(LIB) $(EXEC) $(BOBJ)

so:
	$(SOCC) -fPIC $(CFLAGS) $(SRC) $(BSRC)
	gcc -shared -o libft.so $(OBJ) $(BOBJ)

clean: 
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(EXEC)

re: fclean all

.PHONY: all bonus so clean fclean re
