CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = libft.a

SOURCES = 	./ft_atoi.c \
./ft_bzero.c \
./ft_calloc.c \
./ft_isalnum.c \
./ft_isalpha.c \
./ft_isascii.c \
./ft_isdigit.c \
./ft_isprint.c \
./ft_itoa.c \
./ft_memchr.c \
./ft_memcmp.c \
./ft_memcpy.c \
./ft_memmove.c \
./ft_memset.c \
./ft_putchar_fd.c \
./ft_putendl_fd.c \
./ft_putnbr_fd.c \
./ft_putstr_fd.c \
./ft_split.c \
./ft_strchr.c \
./ft_strdup.c \
./ft_striteri.c \
./ft_strjoin.c \
./ft_strlcat.c \
./ft_strlcpy.c \
./ft_strlen.c \
./ft_strmapi.c \
./ft_strncmp.c \
./ft_strnstr.c \
./ft_strrchr.c \
./ft_strtrim.c \
./ft_substr.c \
./ft_tolower.c \
./ft_toupper.c

SOURCES_BONUS = ./ft_lstadd_back.c \
./ft_lstadd_front.c \
./ft_lstadd_back.c \
./ft_lstclear.c \
./ft_lstdelone.c \
./ft_lstiter.c \
./ft_lstlast.c \
./ft_lstmap.c \
./ft_lstnew.c \
./ft_lstsize.c

OBJETS = $(SOURCES:.c=.o)
BONUS = $(SOURCES_BONUS:.c=.o)

all: $(EXEC)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(EXEC): $(OBJETS)
	ar rcs $(EXEC) $(OBJETS)
bonus: $(BONUS)
	ar rcs $(EXEC) $(OBJETS) $(BONUS)

clean:
	rm -f $(OBJETS) $(BONUS)
fclean: clean
	rm -f $(EXEC)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SOURCES)
	gcc -nostartfiles -shared -o libft.so $(OBJETS)

.PHONY: all clean fclean re


