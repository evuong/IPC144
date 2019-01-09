// Name: Edward Vuong
// Student Number: 120246186
// Email: evuong1@myseneca.ca
// Section: II
// Workshop: 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//defining numbers
#define NUMS 4
#define HIGHVALUE -40
#define LOWVALUE 40

// Put your code below:

int main() {
    
    int i;
    int dayhigh [100] = {0};
    int daylow [100] = {0};
    int highest = HIGHVALUE;
    int lowest = LOWVALUE;
    int dayofhigh = 0;
    int dayoflow = 0;
    double sum = 0;
    double average;             //variable declaration
    
    printf ("---=== IPC Temperature Analyzer ===---\n");
    
    for (i = 1; i <= NUMS; i++) {
        printf ("Enter the high value for day %d: ", i);
        scanf ("%d", &dayhigh[i]);
        printf("\n");
        
        printf ("Enter the low value for day %d: ", i);
        scanf ("%d", &daylow[i]);
        printf("\n");
        
        
        //data validation
        while (daylow[i] > dayhigh[i] || dayhigh[i] > LOWVALUE || daylow[i] < HIGHVALUE ) {
            printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
            
            printf ("\nEnter the high value for day %d: ", i);
            scanf ("%d", &dayhigh[i]);
            
            printf ("\nEnter the low value for day %d: ", i);
            scanf ("%d", &daylow[i]);
            printf("\n");
        }
        
        //adding up the sum
        sum += dayhigh[i] + daylow[i];
        
        //finding out the highest and lowest numbers
        if (highest < dayhigh[i]) {
            highest = dayhigh[i];
            dayofhigh = i;
        }
        
        if (lowest > daylow[i]) {
            lowest = daylow[i];
            dayoflow = i;
            
        }
        
    }
    
    //printing out the average temperature
    average = sum / (NUMS * 2);
    printf("The average (mean) temperature was: %.2lf\n", average);
    printf("The highest temperature was %d, on day %d\n", highest, dayofhigh);
    printf("The lowest temperature was %d, on day %d\n", lowest, dayoflow);
    
    return(0);
}


