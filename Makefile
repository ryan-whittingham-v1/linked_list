main: main.o init.o
	gcc -o main main.o init.o
main.o: main.c PA1.h
	gcc -c main.c
init.o: init.c PA1.h
	gcc -c init.c
clean: 
	rm main main.o init.o

