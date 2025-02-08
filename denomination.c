#include <stdio.h>

int main () {
	int one_k, five_h, two_h, one_h, fifty, twenty, ten, five, one; // monetary denominations
	int value; // separate int for value
	
	st:
		
	printf("\nDENOMINATION COUNTER\n");
	printf("1000: ");
	scanf("%d", &one_k);
	printf("500: ");
	scanf("%d", &five_h);
	printf("200: ");
	scanf("%d", &two_h);
	printf("100: ");
	scanf("%d", &one_h);
	printf("50: ");
	scanf("%d", &fifty);
	printf("20: ");
	scanf("%d", &twenty);
	printf("10: ");
	scanf("%d", &ten);
	printf("5: ");
	scanf("%d", &five);
	printf("1: ");
	scanf("%d", &one);
	
	printf("\nThe value of 1000 bills are: %d\n", 1000 * one_k);
	printf("The value of 500 bills are: %d\n", 500 * five_h);
	printf("The value of 200 bills are: %d\n", 200 * two_h);
	printf("The value of 100 bills are: %d\n", 100 * one_h);
	printf("The value of 50 bills are: %d\n", 50 * fifty);
	printf("The value of 20 bills and coins are: %d\n", 20 * twenty);
	printf("The value of 10 coins are: %d\n", 10 * ten);
	printf("The value of 5 coins are: %d\n", 5 * five);
	printf("The value of 1 coins are: %d\n", 1 * one);
	
	value = one_k * 1000 + five_h * 500 + two_h * 200 + one_h * 100 + fifty * 50 + twenty * 20 + ten * 10 + five * 5 + one * 1;
	
	printf("Overall value = %d\n", value);
	goto st;
	
	return 0;
}
