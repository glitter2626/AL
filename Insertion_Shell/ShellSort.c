#include<stdio.h>

void ShellSort(int data[], int n){
	int j;
	int count = 0;
	for(int gap = n/2; gap >= 1; gap/=2){
		for(int i = gap; i < n; i++){
			int temp = data[i];
			for(j = i - gap; j >= 0; j-=gap){
				if(data[j] > temp){
					data[j + gap] = data[j];
					count++;
				}
				else
					break;
			}
			data[j + gap] = temp;
		}
	}
	printf("Change count:%d", count);
}
