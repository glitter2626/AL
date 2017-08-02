Main: main.o InsertionSort.o ShellSort.o
	gcc -g -o Main main.o InsertionSort.o ShellSort.o

main.o: main.c
	gcc -g -c main.c

InsertionSort.o: InsertionSort.c
	gcc -g -c InsertionSort.c

ShellSort.o: ShellSort.c
	gcc -g -c ShellSort.c

clean: 
	rm -f main.o InsertionSort.o ShellSort.o Main
