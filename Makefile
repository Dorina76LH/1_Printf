#-----------------------------------
#          NAMES and PATHS          
#-----------------------------------

# Name of final binary (static library)
NAME = libftprintf.a

# Directories
INCLUDE_DIR = includes
SRCS_DIR = srcs

# List of source files
SRCS =	$(SRCS_DIR)/ft_printf.c \
		$(SRCS_DIR)/check_format.c \
		$(SRCS_DIR)/print_char.c \
		$(SRCS_DIR)/print_string.c \
		$(SRCS_DIR)/print_hex.c \
		$(SRCS_DIR)/print_number.c \
		$(SRCS_DIR)/print_pointer.c \
		$(SRCS_DIR)/print_unsigned.c

# List of object files (define the name of .o files from .c files)
OBJS = $(SRCS:.c=.o)

#-----------------------------------
#              RULES
#-----------------------------------

## // COMPILING RULES

# Define compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(INCLUDE_DIR)
AR = ar
ARFLAGS = rcs

# Rule for all .c files necessary to build the final binary
all: $(NAME)

# To make $(NAME), create all .o files 
$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "Library $(NAME) created!"

# Compile .o files
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

## // CLEANING RULES

# Remove $(OBJ) => (.o) files
clean:
	rm -f $(OBJS)
	@echo "Object files cleaned!"

# Remove $(NAME) => final binary
fclean: clean
	rm -f $(NAME)
	@echo "Library $(NAME) removed!"

# Rebuild all : remove $(OBJ) and $(NAME) and compile all
re: fclean all

# Phony targets
.PHONY: all clean fclean re
