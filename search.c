#include<stdio.h>
#include"PA1.h"

int search(struct node *ll, int userData){
	int temp=ll[0].next;
	while(temp != MYNULL){
		if(ll[temp].data == userData){
			printf("FOUND\n\n");
			return 1;
		}
		temp=ll[temp].next;
	}
	printf("NOT FOUND\n\n");	
}

