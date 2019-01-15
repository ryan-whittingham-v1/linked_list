#include<stdio.h>
#include"PA1.h"

void init(struct node *ll){
        ll[0].valid=1;
        ll[0].data=0;
        ll[0].next=MYNULL;
        int i;
        for(i=1; i<100; i++){
                ll[i].valid=0;
                ll[i].data=0;
                ll[i].next=MYNULL;
        }
}

