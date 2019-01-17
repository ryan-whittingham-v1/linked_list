#include<stdio.h>
#include"PA1.h"

void print(struct node *ll){
	printf("\nTHE LIST\n");
	printf("--------\n");
	int nodeIndex=ll[0].next;//Set nodeIndex to first node
	if(nodeIndex==MYNULL){//If first node is the end of the list
		printf("EMPTY\n");
	}	
	while(nodeIndex != MYNULL){//While not the end of the list
		printf("%d\n", ll[nodeIndex].data);
		nodeIndex=ll[nodeIndex].next;//Move to next node in list
	}
	printf("--------\n\n");
}

