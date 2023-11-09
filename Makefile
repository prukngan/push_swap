# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prukngan <phongsathon.rak2003@gmail.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 11:08:09 by prukngan          #+#    #+#              #
#    Updated: 2023/09/23 11:08:09 by prukngan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRCS	=	main.c\
			#operation.c \

OBJS	=	$(SRCS:.c=.o)

FLAGS	=	-Wall -Wextra -Werror

OBJS_DIR	=	output

$(NAME):
		$(MAKE) ./libft
		gcc $(FLAGS) -c $(SRCS) ./libft/libft.a -o $(NAME)

# $(OBJS):
# 		mkdir -p $(OBJS_DIR)
# 		mv $(OBJS) $(OBJS_DIR)

all:	$(NAME)

clean:
		rm -rf $(OBJS_DIR)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re