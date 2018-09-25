#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "getnumber.h"

int getnumber( char type[20] ) {
	/* initialize variables */
	int pass; /* boolean */
	char number[2];
	int num;
	
	/* get user input for the amount of players and how many cards per player */
	do { /* Do this loop until the user enters a number */
		pass = 0;
		number[0] = '\0'; /* reinitialize the numbers */
		number[1] = '\0';
		
		printf("Enter number of %s: ", type);
		scanf("%s", number);
		
	if ( isdigit(number[0]) && ( (number[1] == '\0') || isdigit(number[1]) ) ) { /* if its a number parse it to an int */
			sscanf( number, "%d", &num );
		} else { /* if its not a number, repeat */
			printf("Please enter a number!\n");
			pass = 1;
		}
	} while(pass == 1);
	
	return num;
}
