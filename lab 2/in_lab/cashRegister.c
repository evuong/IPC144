/*
Name:      Edward Vuong
Student#:  120246186
Section:   I
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
	double amount;
	int loonies;
	int quarters;

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);

    loonies = amount;
    amount -= loonies;

	printf("Loonies requierd: %d, balance owing $%.2lf\n",loonies, amount);

	quarters = amount / 0.25;
	amount = amount - quarters*0.25;
	
	printf("Quarters required: %d, balance owing $%.2lf\n", quarters, amount);


	return(0);
}

