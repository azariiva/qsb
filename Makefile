# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: blinnea <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/21 21:19:13 by blinnea           #+#    #+#              #
#    Updated: 2019/08/21 22:07:06 by blinnea          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# program name
NAME = bsq

# compilation flags
CF = -Wall -Wextra -Werror

# directories
LIBCHARMAP_SRCS = ./srcs/libcharmap
LIBFT_SRCS = ./srcs/libft
LIBLIST_SRCS = ./srcs/liblist
LIBMAP_SRCS = ./srcs/libmap
INCLUDES = ./includes

# function names
MAIN_FUNC = main
LIBCHARMAP_FUNCS = create_charmap write_charmap_first_line fill_charmap_square \
				   free_charmap print_charmap process_input
LIBFT_FUNCS = ft_putchar ft_getchar ft_puterr
LIBLIST_FUNCS = ft_create_elem get_lineaslist free_list print_list get_listsize
LIBMAP_FUNCS = zerofy_coords is_correct_sym get_map_height_eof make_map_lines \
			   get_map_first_line get_map_line swap_map_lines get_map_cell \
			   find_max_coords free_map

# source files
MAIN_C_FILE = $(patsubst %, %.c, $(MAIN_FUNC))
LIBCHARMAP_C_FILES = $(patsubst %, $(LIBCHARMAP_SRCS)/%.c, $(LIBCHARMAP_FUNCS))
LIBFT_C_FILES = $(patsubst %, $(LIBFT_SRCS)/%.c, $(LIBFT_FUNCS))
LIBLIST_C_FILES = $(patsubst %, $(LIBLIST_SRCS)/%.c, $(LIBLIST_FUNCS))
LIBMAP_C_FILES = $(patsubst %, $(LIBMAP_SRCS)/%.c, $(LIBMAP_FUNCS))

# object files
MAIN_O_FILE = $(patsubst %, %.o, $(MAIN_FUNC))
LIBCHARMAP_O_FILES = $(patsubst %, %.o, $(LIBCHARMAP_FUNCS))
LIBFT_O_FILES = $(patsubst %, %.o, $(LIBFT_FUNCS))
LIBLIST_O_FILES = $(patsubst %, %.o, $(LIBLIST_FUNCS))
LIBMAP_O_FILES = $(patsubst %, %.o, $(LIBMAP_FUNCS))

.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(MAIN_O_FILE) $(LIBCHARMAP_O_FILES) $(LIBFT_O_FILES) $(LIBLIST_O_FILES) $(LIBMAP_O_FILES)
	@gcc $(CF) $(MAIN_O_FILE) $(LIBCHARMAP_O_FILES) $(LIBFT_O_FILES) $(LIBLIST_O_FILES) $(LIBMAP_O_FILES) -o $(NAME)

$(MAIN_O_FILE): $(MAIN_C_FILE)
	@gcc $(CF) -c $(MAIN_C_FILE) -I $(INCLUDES)

$(LIBCHARMAP_O_FILES): $(LIBCHARMAP_C_FILES)
	@gcc $(CF) -c $(LIBCHARMAP_C_FILES) -I $(INCLUDES)

$(LIBFT_O_FILES): $(LIBFT_C_FILES)
	@gcc $(CF) -c $(LIBFT_C_FILES) -I $(INCLUDES)

$(LIBLIST_O_FILES): $(LIBLIST_C_FILES)
	@gcc $(CF) -c $(LIBLIST_C_FILES) -I $(INCLUDES)

$(LIBMAP_O_FILES): $(LIBMAP_C_FILES)
	@gcc $(CF) -c $(LIBMAP_C_FILES) -I $(INCLUDES)

clean:
	@rm -f $(MAIN_O_FILE) $(LIBCHARMAP_O_FILES) $(LIBFT_O_FILES) $(LIBLIST_O_FILES) $(LIBMAP_O_FILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all
