# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 15:29:27 by jormanue          #+#    #+#              #
#    Updated: 2025/06/03 18:22:16 by jormanue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#build library
echo "does your shit compile"
make re
#test counter
T=0
#build tests
cc -g -Wall -Werror -Wextra -Iinclude tests/test.c -L. -lftprintf -o tests/test

echo "running tests"
./tests/test 

make fclean
cd tests/
echo "i was never here"
