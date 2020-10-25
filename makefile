all : main.o
	gcc -o main main.o

main.o : main.c
	gcc -c main.c

.PHONY : clean run

clean : 
	rm *.o

run: 
	./main
