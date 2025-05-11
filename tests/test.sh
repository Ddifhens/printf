# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 15:29:27 by jormanue          #+#    #+#              #
#    Updated: 2025/05/11 16:08:10 by jormanue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#build library
echo "does your shit compile"
make re
#test counter
T=0
#build tests
cc -Wall -Werror -Wextra -Iinclude tests/test.c -L. -lftprintf -o tests/test
T=$((T+1))

echo "$T tests are coming for you"

echo "and they run"
./tests/test 

make fclean
cd tests/
rm test
echo "i was never here"
