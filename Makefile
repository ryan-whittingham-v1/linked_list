main: main.o init.o print.o add.o
	gcc -o main main.o init.o print.o add.o
main.o: main.c PA1.h
	gcc -c main.c
init.o: init.c PA1.h
	gcc -c init.c
print.o: print.c PA1.h
	gcc -c print.c
add.o: add.c PA1.h 
	gcc -c add.c
clean: 
	rm main main.o init.o print.o add.o

