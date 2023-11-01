NAME = libft.a

CFILES = ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isalnum.c	\
		 ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c	\
		 ft_memchr.c	ft_memcmp.c		ft_memcpy.c		ft_memset.c		\
		 ft_strchr.c	ft_strjoin.c	ft_strlcat.c	ft_strlcpy.c	\
		 ft_strlen.c	ft_strncmp.c	ft_strdup.c		ft_strnstr.c	\
		 ft_strrchr.c	ft_substr.c		ft_tolower.c	ft_toupper.c

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) clean
	
$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
#	rm -f $(OFILES)

.PHONY: all clean fclean re
