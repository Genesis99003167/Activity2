SRC = src/arraysum.c\
src/checkarmstrong.c\
src/checkprime.c\
src/largestinarray.c\
src/smallestinarray.c\
src/checkperfect.c\
src/missingnoinarray.c\
src/decitobin.c\
src/bintodeci.c\
src/checkmagic.c\
src/checkneon.c\
tests/test_main.c\
unity/unity.c\
main.c

INC = -Iinc\
-Iunity\
-Itests\

PROJECT_NAME = letsdoit.o

$(PROJECT_NAME): $(SRC)

	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)

	./${PROJECT_NAME}