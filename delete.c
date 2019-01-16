#include<stdio.h>
#include"PA1.h"
void release_node(struct node *, int);

int delete(struct node *ll, int nodeData){
	int nodeIndex=ll[0].next;
	int prevNode=0;
	while(ll[prevNode].next!=MYNULL){//While not the end of the list
		if(ll[nodeIndex].data==nodeData){//Data is in the list
			printf("SUCCESS\n");
			ll[prevNode].next=ll[nodeIndex].next;//Set previous node to point to where deleted node was
			release_node(ll, nodeIndex);//Sets valid to 0
			return 1;	
		}
		prevNode=nodeIndex;//Move to next node for previous node
		nodeIndex=ll[nodeIndex].next;//Move to next node for checking in if statement
	}
	printf("NODE NOT FOUND\n");
	return 0;//Data is not in the list
}	

void release_node(struct node *ll, int thisNodeIndex){
	ll[thisNodeIndex].valid=0;
}

