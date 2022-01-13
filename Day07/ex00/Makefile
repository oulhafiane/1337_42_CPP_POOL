# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 11:45:25 by zoulhafi          #+#    #+#              #
#    Updated: 2021/11/03 10:09:33 by zoulhafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = swap_min_max
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
DEPS = whatever.hpp
OBJECTS = $(SRCS:.cpp=.o)
RED = \033[1;31m
GREEN = \033[1;32m
BLUE = \033[1;34m
YELLOW = \033[1;33m
NC = \033[1;0m

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(RED)Compiling $(NAME)...$(NC)"
	@echo "$(RED)Linking...$(NC)"
	@$(CC) $(FLAGS) $(OBJECTS) -o $(NAME) 
	@echo "$(GREEN)Finished linking && compiling...$(NC)"

%.o: %.cpp $(DEPS)
	@$(CC) $(FLAGS) -c -o $@ $<
	@echo "$(RED)Compiling $< ...$(NC)"

clean:
	@echo "$(RED)Cleaning objects...$(NC)"
	@rm -rf $(OBJECTS)
	@echo "$(GREEN)Cleaned objects...$(NC)"

fclean: clean
	@echo "$(RED)Cleaning $(NAME)...$(NC)"
	@rm -rf $(NAME)
	@echo "$(GREEN)Cleaned $(NAME)...$(NC)"

re: fclean all
