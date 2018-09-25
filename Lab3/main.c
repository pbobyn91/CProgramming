#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "card.h"
#include "getnumber.h"
#include <time.h>

int main () {
	
	/* declare variables */
	short players_number, card_number, i, j, k, pass;
	int cards[52];
	time_t t;
	
	/* call methods to ask for user input */
	do {
		pass = 0;
		players_number = getnumber("players");
		if ( (players_number >= 2) && (players_number <= 4) ){
		} else {
			printf("Only allowed 2 to 4 players!\n");
			pass = 1;
		}
	} while ( pass == 1 );
	
	card_number = getnumber("cards per player");	
	
	/* check to make sure the number is greater than 0 and lower than 52. If it is then deal cards */
	if ( ( (players_number * card_number) > 52) || ( ( players_number * card_number) <= 0) ) {
		printf("Error: Invalid number of cards");
	} else {  /* deal cards */
		/* use 2 for loop to hand random cards to players */
		srand( (unsigned) time(&t) );
		for (i = 0; i < 52; i++){
			do {
				pass = 0;
				cards[i] = rand()%52;
				for (j=0; j < i; j++){
					if ( j == i ){
					
					} else if (cards[j] == cards[i]){
						pass = 1;
					}
				}
			} while( pass == 1 );
		}
		
		k = 0;
		/* print all the cards by the user */
		for (i = 0; i < players_number; i++){
			printf("Hand #%d is:\n", i+1); 
			for (j = 0; j < card_number; j++){
				card( cards[k] );
				printf(" ");
				k++;
			}
			printf("\n");
		}
	}
	
	return 0;
}