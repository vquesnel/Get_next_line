# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    gnl.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vquesnel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/23 11:23:53 by vquesnel          #+#    #+#              #
#    Updated: 2016/03/23 11:28:09 by vquesnel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

make -C libft/ re
gcc -Wall -Wextra -Werror -o testgnl get_next_line.c main.c -I libft/ -I . libft/libft.a
