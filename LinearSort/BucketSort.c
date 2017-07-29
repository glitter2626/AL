#include<stdio.h>
#include<stdlib.h>

typedef struct list{
	float value;
	struct list* next;
	struct list* previous;
}List;

void BucketSort(float data[], int n){
	List list[n];
	for(int i = 0; i < n; i++){
		list[i].next = NULL;
		list[i].previous = NULL;
	}

	for(int i = 0; i < n; i++){
		int index = n * data[i];
		List* ptr = &list[index];
		List* pre = NULL;
		while(ptr->next != NULL){
			ptr = ptr->next;
			pre = ptr;
		}
		
		ptr->next = (List*)malloc(sizeof(List));
		ptr = ptr->next;
		ptr->value = data[i];
		ptr->next = NULL;
		ptr->previous = pre;
	}

	
	for(int i = 0; i < n; i++){
		List* ptr = &list[i];
		List* pre;
		if(ptr->next == NULL || ptr->next->next == NULL)
			continue;

		ptr = ptr->next;
		while(ptr->next != NULL){
			pre = ptr;
			ptr = ptr->next;
			float temp = ptr->value;
			List* last = ptr;
			while(pre != NULL && pre->value > temp){
				last->value = pre->value;
				pre = pre->previous;
				last = last->previous;
			}
			last->value = temp;
		}
	}
	
	int index = 0;
	for(int i = 0; i < n; i++){
		List* ptr = list[i].next;
		while(ptr != NULL){
			data[index++] = ptr->value;
			ptr = ptr->next;
		}
	}
}
