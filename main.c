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
		int ret=sscanf(buffer, "%s" "%9d", userLetter, &userNum);
		if(ret==2){//If two valid arguments given
			//if "i" (number) insert number
			if (strcmp(userLetter, "i") == 0){
				add(list, userNum);
			} 
			//If "s" (number) search for number
			else if (strcmp(userLetter, "s") == 0){
				search(list, userNum);
			} 
			//If "d" (number) delete number
			else if (strcmp(userLetter, "d") == 0){
				delete(list, userNum);
			}
			//Else display options
			else{
				showOptions();
			}
		}
		else if(ret==1){//If 1 valid argument given
			if(strcmp(userLetter,"x")==0){//If "x" exit
				return 0;
			}
			else if (strcmp(userLetter,"p")==0){//If "p" print
				print(list);
			}
			else{
				showOptions();
			}
		}
		else{//Display options if ret != 2
			showOptions();
		} 
	}
	return 0;
}
