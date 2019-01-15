#include<stdio.h>
#include"PA1.h"

void print(struct node *ll){
	int nextNode=0;
	printf("The List\n");
	printf("-----------\n");
	/*
	int i=0;
	while(i<100){
		printf("Item %d data:%d points to:%d valid:%d\n", i, ll[i].data, ll[i].next, ll[i].valid);
		i++;
	}
	*/
	while(ll[nextNode].next != MYNULL){
		nextNode=ll[nextNode].next;
		printf("%d\n", ll[nextNode].data);
	}
	
}

