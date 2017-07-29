#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Partition();

void Swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void QuickSort(int data[], int p, int r){

	if(p >= r)
		return;

	int q = Partition(data, p, r);

	QuickSort(data, p, q-1);

	QuickSort(data, q+1, r);
}

int Partition(int data[], int p, int r){
	int j = p;
	srand(time(NULL));

	int q = (rand() % (r - p + 1)) + p;

	Swap(&data[q], &data[r]);

	for(int i = p; i < r; i++){
		if(data[i] < data[r]){
			Swap(&data[j], &data[i]);
			j++;
		}
	}
	
	Swap(&data[j], &data[r]);

	return j;
}
