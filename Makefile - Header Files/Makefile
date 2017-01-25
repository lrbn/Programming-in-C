all: exp

CC=gcc

OPTIONS=-Wall -Werror -g

exp: exp.c add.c
        $(CC) $(OPTIONS) -o exp exp.c add.c
        
clean:
        rm -f exp *.o *.out
