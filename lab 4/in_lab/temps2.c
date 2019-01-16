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
    
    printf("---=== IPC Temperature Calculator V2.0 ===---\n");
    
    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d", &days);
    
    while (days > 10 || days < 3) {
        printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
        scanf("%d", &days);
    }
    
    printf("\n");
    for (i = 1; i <= days; i++) {
        printf("Day %d - High: ", i);
        scanf("%d", &high[i]);
        
        printf("Day %d - Low: ", i);
        scanf("%d", &low[i]);
    }
    
    printf("\nDay  Hi  Low\n");
    
    for (i = 1; i <= days; i++) {
        printf("%d %4d %5d\n", i, high[i], low[i]);
    }
    
    return 0;
}
