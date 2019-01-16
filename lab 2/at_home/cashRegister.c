/*
 Name:      Edward Vuong
 Student#:  120246186
 Section:   II
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    double amount;
    int balance;
    int loonies;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    double gst;         // variable declaration
    
    printf("Please enter the amount to be paid: $");
    scanf("%lf", &amount);
    
    //calculating GST
    printf("GST: 1.13\n");
    gst = amount * 0.13 + .005;
    amount += gst;
    
    printf("Balance owing: $%.2lf\n", amount);
    
    //loonies
    loonies = amount;
    amount -= loonies;
    printf("Loonies required: %d, balance owing $%.2lf\n", loonies, amount);
    
    //changing my double variable into an int
    balance = amount*100;
    
    //quarters
    quarters = balance / 25;
    balance = balance % 25;
    printf("Quarters required: %d, balance owing $%.2lf\n", quarters, (double)balance/100);
    
    //dimes
    dimes = balance / 10;
    balance = balance % 10;
    printf("Dimes required: %d, balance owing $%.2lf\n", dimes, (double)balance/100);
    
    //nickels
    nickels = balance / 5;
    balance = balance % 5;
    printf("Nickels required: %d, balance owing $%.2lf\n", nickels, (double)balance/100);
    
    //pennies
    pennies = balance;
    balance = balance % 1;
    printf("Pennies required: %d, balance owing $%.2lf\n", pennies, (double)balance/100);
    
    return(0);
}

