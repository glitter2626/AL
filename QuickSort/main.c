#include<stdio.h>

void QuickSort();

int main(){
	int data[] = {45,84,77,83,55,49,91,64,91,5,37,31,70,38,51};
	int n = 15;
	QuickSort(data, 0, n-1);
	for(int i = 0; i < 15; i++)
		printf("%d ", data[i]);
	printf("\n");
	
}
