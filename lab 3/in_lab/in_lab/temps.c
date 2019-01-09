// Name: Edward Vuong
// Student Number: 120246186
// Email: evuong1@myseneca.ca
// Section: II
// Workshop: 3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//defining numbers
#define NUMS 3
#define HIGHVALUE -40
#define LOWVALUE 40

// Put your code below:

int main() {
    
    int i;
    int dayhigh;
    int daylow;
    double sumhigh = 0;
    double sumlow = 0;
    double average;             //variable declaration
    
    printf ("---=== IPC Temperature Analyzer ===---\n");
    
    for (i = 1; i <= NUMS; i++) {
        
        printf ("Enter the high value for day %d: ", i);
        scanf ("%d8", &dayhigh);
       
        printf ("\nEnter the low value for day %d: ", i);
        scanf ("%d", &daylow);
        
        //so i could submit it
        printf ("\n");
        
        //data validation
        while (daylow > dayhigh || dayhigh > LOWVALUE || daylow < HIGHVALUE ) {
            printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
           
            printf ("\nEnter the high value for day %d: ", i);
            scanf ("%d", &dayhigh);
            
            printf ("\nEnter the low value for day %d: ", i);
            scanf ("%d", &daylow);
            
            //so i could submit it
            printf("\n");

        }
        
        //adding up the sum
        sumhigh += dayhigh;
        sumlow += daylow;
        
    }
    
    //printing out the average temperature
    average = (sumhigh + sumlow) / (NUMS * 2);
    printf("The average (mean) temperature was: %.2lf\n", average);
    
    return(0);
}


