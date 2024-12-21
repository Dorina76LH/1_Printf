#-----------------------------------
#          NAMES and PATHS          
#-----------------------------------

# Name of final binary (static library)
NAME = libftprintf.a

# Directories
INCLUDE_DIR = includes
SRCS_DIR = srcs
LIBFT_DIR = libft

# List of source files
SRCS =	$(SRCS_DIR)/ft_printf.c \
		$(SRCS_DIR)/check_format.c \
		$(SRCS_DIR)/print_char.c \
		$(SRCS_DIR)/print_str.c \
		$(LIBFT_DIR)/ft_putchar_fd.c \
		$(LIBFT_DIR)/ft_putstr_fd.c \
		$(LIBFT_DIR)/ft_strlen.c \

# List of object files (define the name of .o files from .c files)
OBJS = $(SRCS:.c=.o)

#-----------------------------------
#              RULES
#-----------------------------------

## // COMPILING RULES

# Define compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INCLUDE_DIR)

# Rule for all .c files necessary to build the final binary
all: $(NAME)

# To make $(NAME), create all .o files 
$(NAME) : $(OBJS)
	$(AR) -r $(NAME) $?

# Compile .o files
%.o: %.c 
	$(CC) -c $(CFLAGS) $?

## // CLEANING RULES

# Remove $(OBJ) => (.o) files
clean:
	rm -f $(OBJ)

# Remove $(NAME) => final binary
fclean: clean
	rm -f $(NAME)

# Rebuild all : remove $(OBJ) and $(NAME) and compile all
re: fclean all

# Phony targets
.PHONY: all clean fclean re
