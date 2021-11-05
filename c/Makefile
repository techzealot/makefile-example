.PHONY: all clean run

OBJS:=multi.o sum.o

TARGETS:= main

all: ${TARGETS}

clean:
	-rm *.o ${TARGETS}
run:${TARGETS}
	./$<

${OBJS}:%.o:%.c
	gcc -c $^ -o $@
main: ${OBJS} main.c
	gcc $^ -o $@