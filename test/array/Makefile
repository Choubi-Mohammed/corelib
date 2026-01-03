# **************************************************************************** #
#                                                                              #
#                                                            ____    _____     #
#    Makefile                                               |___ \  |___ /     #
#                                                             __) |   |_ \     #
#    By: shobeedev <https://shobee.space/>                   / __/   ___) |    #
#                                                           |_____| |____/     #
#    Created: 2026/01/03 13:03:34 by shobeedev               shobee4ever       #
#    Updated: 2026/01/03 13:36:06 by shobeedev            tfaaty fi l3oolaa    #
#                                                                              #
# **************************************************************************** #

CC = g++
OBJ1 = ../../src/number/number.o
OBJ2 = ../../src/random/random.o
OBJ3 = ../../src/array/array.o
RESULT = -o testprog

app : $(OBJ1) $(OBJ2) $(OBJ3)
	@$(CC) main.cpp $(OBJ1) $(OBJ2) $(OBJ3) $(RESULT)

.PHONY: clean
clean :
	@rm -rf testprog
	@rm -rf $(OBJ1) $(OBJ2) $(OBJ3)
