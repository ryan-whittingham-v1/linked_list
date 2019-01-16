main: main.o init.o print.o add.o delete.o showOptions.o
	gcc -o main main.o init.o print.o add.o delete.o showOptions.o
main.o: main.c PA1.h
	gcc -c main.c
init.o: init.c PA1.h
	gcc -c init.c
print.o: print.c PA1.h
	gcc -c print.c
add.o: add.c PA1.h 
	gcc -c add.c
delete.o: delete.c PA1.h
	gcc -c delete.c
showOptions.o: showOptions.c 
	gcc -c showOptions.c
clean: 
	rm main main.o init.o print.o add.o delete.o showOptions.o

