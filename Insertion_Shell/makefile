Main: main.o InsertionSort.o ShellSort.o
	gcc -o Main main.o InsertionSort.o ShellSort.o

main.o: main.c
	gcc -c main.c

InsertionSort.o: InsertionSort.c
	gcc -c InsertionSort.c

ShellSort.o: ShellSort.c
	gcc -c ShellSort.c

clean: 
	rm -f main.o InsertionSort.o ShellSort.o Main
