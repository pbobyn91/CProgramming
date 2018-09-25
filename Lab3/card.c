#include "card.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void card( int card_type ){
	switch ( card_type ){
		case 0:/* send a letter back based on number */
			printf("AS");
			break;
		case 1:
			printf("2S");
			break;
		case 2:
			printf("3S");
			break;
		case 3:
			printf("4S");
			break;
		case 4:
			printf("5S");
			break;
		case 5:
			printf("6S");
			break;
		case 6:
			printf("7S");
			break;
		case 7:
			printf("8S");
			break;
		case 8:
			printf("9S");
			break;
		case 9:
			printf("10S");
			break;
		case 10:
			printf("JS");
			break;
		case 11:
			printf("QS");
			break;
		case 12:
			printf("KS");
			break;
		case 13:
			printf("AC");
			break;
		case 14:
			printf("2C");
			break;
		case 15:
			printf("3C");
			break;
		case 16:
			printf("4C");
			break;
		case 17:
			printf("5C");
			break;
		case 18:
			printf("6C");
			break;
		case 19:
			printf("7C");
			break;
		case 20:
			printf("8C");
			break;
		case 21:
			printf("9C");
			break;
		case 22:
			printf("10C");
			break;
		case 23:
			printf("JC");
			break;
		case 24:
			printf("QC");
			break;
		case 25:
			printf("KC");
			break;
		case 26:
			printf("AD");
			break;
		case 27:
			printf("2D");
			break;
		case 28:
			printf("3D");
			break;
		case 29:
			printf("4D");
			break;
		case 30:
			printf("5D");
			break;
		case 31:
			printf("6D");
			break;
		case 32:
			printf("7D");
			break;
		case 33:
			printf("8D");
			break;
		case 34:
			printf("9D");
			break;
		case 35:
			printf("10D");
			break;
		case 36:
			printf("JD");
			break;
		case 37:
			printf("QD");
			break;
		case 38:
			printf("KD");
			break;
		case 39:
			printf("AH");
			break;
		case 40:
			printf("2H");
			break;
		case 41:
			printf("3H");
			break;
		case 42:
			printf("4H");
			break;
		case 43:
			printf("5H");
			break;
		case 44:
			printf("6H");
			break;
		case 45:
			printf("7H");
			break;
		case 46:
			printf("8H");
			break;
		case 47:
			printf("9H");
			break;
		case 48:
			printf("10H");
			break;
		case 49:
			printf("JH");
			break;
		case 50:
			printf("QH");
			break;
		case 51:
			printf("KH");
			break;
		default:
			printf("Null");
			break;
	}
}