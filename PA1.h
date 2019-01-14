#include<string.h>
#define MYNULL = -1;

struct node {
	int data;
	int next;
	int valid;
};

typedef struct node Node;

int get_node(Node *);
void release_node(Node *, int);
void init(Node *);
int add(Node *, int);
void print(Node *);
int delete(Node *, int);
int search(Node *, int);

