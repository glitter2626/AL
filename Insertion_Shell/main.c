#include<stdio.h>

void ShellSort();
void InsertionSort();

int main(){
	int data1[] = {45,84,77,83,55,49,91,64,91,5,37,31,70,38,51};
	int data2[] = {45,84,77,83,55,49,91,64,91,5,37,31,70,38,51};
	int n = 15;
	ShellSort(data1, n);
	printf("ShellSort:");
	for(int i = 0; i < 15; i++)
		printf("%d ", data1[i]);
	printf("\n");

	InsertionSort(data2, n);
	printf("InsertionSort:");
	for(int i = 0; i < 15; i++)
		printf("%d ", data2[i]);
	printf("\n");

}


