NAME = libftprintf.a

SOURCES = ft_printf_utils.c ft_printf.c

# BONUS_SOURCES = 
		
OBJECTS = $(SOURCES:.c=.o)

BONUS_OBJECTS = $(BONUS_SOURCES:.c=.o)

CFLAGS += -Wextra -Werror -Wall
 
all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

# creat the static library ar: archive r: replace c: creat s: index; so this command creates or update

# bonus: $(BONUS_OBJECTS)
# 	ar rcs $(NAME) $(BONUS_OBJECTS)

clean:
	rm -f $(OBJECTS) 
# $(BONUS_OBJECTS)  

fclean:
	rm -f $(NAME) $(OBJECTS)

re: fclean all 