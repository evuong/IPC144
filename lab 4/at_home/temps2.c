//--------------------------------------------------
// Name: Edward Vuong
// Student Number: 120246186
// Email: evuong1@myseneca.ca
// Section: SII
// Workshop: June 7, 2018
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void) {
    
    int days;
    int high [11];
    int low [11];
    int i;
    int highest = 0;
    int lowest = 0;
    int dayhigh = 0;
    int daylow = 0;
    double sum = 0;                // variable declaration
    int num = 0;
    
    printf("---=== IPC Temperature Calculator V2.0 ===---\n");
    
    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d", &days);
    
    //checking if number of days entered is between set amount
    while (days > 10 || days < 3) {
        printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
        scanf("%d", &days);
    }
    
    //collecting temperature information
    printf("\n");
    for (i = 1; i <= days; i++) {
        printf("Day %d - High: ", i);
        scanf("%d", &high[i]);
        
        //finding highest temperature on which day
        if (highest == 0) {
            highest = high[i];
            dayhigh = i;
        }
        else if (high[i] > highest) {
            highest = high[i];
            dayhigh = i;
        }
        
        printf("Day %d - Low: ", i);
        scanf("%d", &low[i]);
        
        //finding lowest temperature on which day
        if (lowest == 0) {
            lowest = low[i];
            daylow = i;
        }
        else if (low[i] < lowest) {
            lowest = low[i];
            daylow = i;
        }
    }
    
    //printing out temperatures in a table
    printf("\nDay  Hi  Low\n");
    for (i = 1; i <= days; i++) {
        printf("%d %4d %5d\n", i, high[i], low[i]);
    }
    
    //displaying highest/lowest temperature on which day
    printf("\nThe highest temperature was %d, on day %d\nThe lowest temperature was %d, on day %d\n", highest, dayhigh, lowest, daylow);
    
    //while is used to make this part of the program loop until exit
    while (num >= 0) {
        sum = 0;
        printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
        scanf("%d", &num);
        
        //checking if number entered is between set amount
        while (num > 4 || num == 0) {
            printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
            scanf("%d", &num);
        }
        
        //when a negative number is entered, program says goodbye and exits
        if (num < 0) {
            printf("\nGoodbye!\n");
        }
        
        //adds up the sum up until the day the user enters
        else {
            for (i = 1; i <= num; i++) {
                sum += high[i] + low[i];
            }
            
            //calculates the average
            sum = sum / (num * 2);
            printf("\nThe average temperature up to day %d is: %.2lf\n", num, sum);
        }
    }
    return 0;
}
