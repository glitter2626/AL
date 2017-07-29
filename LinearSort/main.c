#include<stdio.h>

void BucketSort();

int main(){
	float data[] = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};
	int n = 10;
	BucketSort(data, n);

	for(int i = 0; i < n; i++)
		printf("%f ", data[i]);
	printf("\n");
}
