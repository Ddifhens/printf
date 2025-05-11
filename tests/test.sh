# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 15:29:27 by jormanue          #+#    #+#              #
#    Updated: 2025/05/11 15:42:35 by jormanue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#test counter
T=0
#build tests
cc -Wall -Werror -Wextra -Iinclude tests/test.c -L. -lftprintf -o tests/test
T=$((T+1))

echo "built $T test"

echo "running tests"
./tests/test 
