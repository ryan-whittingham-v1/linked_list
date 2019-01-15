#include<stdio.h>
#include"PA1.h"

int get_node(struct node *ll){
	int i=0;
	while(i<100){ //Search for free node
		if(ll[i].valid == 0){
			ll[i].valid == 1;
			return i;
		}
		i++;
	}
	return MYNULL; //If no free nodes available
}

