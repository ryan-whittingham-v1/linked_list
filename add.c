#include<stdio.h>
#include"PA1.h"

int add(struct node *ll, int nodeData){
	int newNode=get_node(ll);
	if(newNode != MYNULL){//If space available in the list 
		ll[newNode].data=nodeData;//Assign user number to node
		
		if(ll[0].next == MYNULL){ //If list is empty
			ll[0].next = newNode;//This node becomes first in the list
			ll[newNode].next = MYNULL;//This node now points to end of list
			printf("SUCCESS\n\n");
			return 1;
		}
		else{//List already contains data
			int nodeIndex=ll[0].next;
			int currentNode=0;
			while(ll[newNode].data>ll[nodeIndex].data){
				currentNode=nodeIndex;//currentNode becomes current index value
				nodeIndex=ll[nodeIndex].next;//nodeIndex becomes next index value
				if(nodeIndex == MYNULL){//If next index points to end of list, new node data is largest in the list
					ll[newNode].next = MYNULL;
					ll[currentNode].next=newNode;
					printf("SUCCESS\n\n");
					return 1;
				}
			}
			if(ll[newNode].data==ll[nodeIndex].data){//Data already in list
				printf("NODE ALREADY IN LIST\n\n");
				return 1;
			}
			else{
				ll[newNode].next=nodeIndex;//new node points to index that failed while loop
				ll[currentNode].next=newNode;//prior node that satisfied while loop points to new node
				return 1;
			}
		}
	}
	printf("OUT OF SPACE\n\n");//No space available in the list
	return 0;
}
