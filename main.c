#include<stdio.h>
//#include"PA1.h"
#include<string.h>
#define MYNULL = -1;

/* 
Ryan Whittingham
CSE 222
January 13, 2019
Programming Assignment 1

-----------------------------------------------
Program that uses a  linked list to store data.
-----------------------------------------------
*/

struct node{
	int data;
	int next;
	int valid;
};

typedef struct node Node;

int main(void){
	struct node list[100];
	char buffer[100];
	char userInput[100];

	//init(Node list);
	//If "x" program exits
	while(strcmp(userInput, "x") != 0){
		//Display prompt for user input
		printf(">");
		//Capture user input
		fgets(buffer, 100, stdin);
		sscanf(buffer, "%s", userInput);
		//If "p" print list
		if (strcmp(userInput, "p") == 0){
			printf("You want to print!\n");
		} 
		//If "s" (number) search for number
		//If "d" (number) delete number
		//Else display options
	}
	return 0;
}
