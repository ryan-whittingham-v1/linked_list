#include<stdio.h>
#include"PA1.h"

/* 
Ryan Whittingham
CSE 222
January 13, 2019
Programming Assignment 1

-----------------------------------------------
Program that uses a  linked list to store data.
-----------------------------------------------
*/

int main(void){
	struct node list[100];
	char buffer[100];
	char userLetter[100];
	int userNum;

	init(list);

	while(1 == 1){
		//Display prompt for user input
		printf(">");
		//Capture user input
		fgets(buffer, 100, stdin);
		sscanf(buffer, "%s" "%d", userLetter, &userNum);
		//if "i" (number) insert number
		if (strcmp(userLetter, "i") == 0){
			printf("You want to insert number %d\n", userNum);
		}
		//If "p" print list
		else if (strcmp(userLetter, "p") == 0){
			printf("You want to print!\n");
		} 
		//If "s" (number) search for number
		else if (strcmp(userLetter, "s") == 0){
			printf("You want to search for number %d\n", userNum);
		} 
		//If "d" (number) delete number
		else if (strcmp(userLetter, "d") == 0){
			printf("You want to delete number %d\n", userNum);
		}
		//If "x" exit
		else if (strcmp(userLetter, "x") == 0){
			return 0;
		}
		//Else display options
		else{
			printf("\nOptions\n");
			printf("-------------------------------\n");
			printf("p  print list\n");
			printf("i (number) - to insert number to list \n");
			printf("s (number) - to search list for number \n");
			printf("d (number) - to delete number from list \n");
			printf("x - close list \n");
			printf("-------------------------------\n");
		} 
	}
	return 0;
}
