#include<stdio.h>

void InsertionSort(int data[], int n){
	int j;
	int count = 0; 
	for(int i = 2; i < n; i++){
		int temp = data[i];
		for(j = i - 1; j >= 0; j--){
			if(data[j] > temp){
				data[j + 1] = data[j];
				count++;
			}
			else
				break;
		}
		data[j+1] = temp;
	}
	printf("Change count:%d", count);
}
