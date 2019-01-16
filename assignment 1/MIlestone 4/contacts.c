/* -------------------------------------------
 Name: Edward Vuong
 Student number: 120246186
 Email: evuong1@myseneca.ca
 Section: SII
 Date: July 16, 2018
 ----------------------------------------------
 Assignment: 1
 Milestone:  4
 ---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// #include your contacts header file on the next line:
#include "contacts.h"
char i = '\0';

// Get and store from standard input the values for Name
void getName (struct Name* names) {
    
    printf("Please enter the contact's first name: ");
    scanf("%s", names->firstName);
    
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    while (getchar() != '\n');
    
    scanf("%c", &i);
    
    if (i == 'n' || i == 'N') {
    }
    else if (i == 'y' || i == 'Y') {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%s", names->middleInitial);
    }
    
    printf("Please enter the contact's last name: ");
    scanf("%s", names->lastName);
}


// Get and store from standard input the values for Address
void getAddress (struct Address* address) {
    printf("Please enter the contact's street number: ");
    scanf("%d", &address->streetNumber);
    
    printf("Please enter the contact's street name: ");
    scanf("%s", address->street);
    
    printf("Do you want to enter an apartment number? (y or n): ");
    while (getchar() != '\n');
    scanf("%c", &i);
    if (i == 'n' || i == 'N') {
    }
    else if (i == 'y' || i == 'Y') {
        printf("Please enter the contact's apartment number: ");
        scanf("%d", &address->apartmentNumber);
    }
    
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", address->postalCode);
    while (getchar() != '\n');
    
    printf("Please enter the contact's city: ");
    scanf("%s", address->city);
}



// Get and store from standard input the values for Numbers
void getNumbers (struct Numbers* nums){
    printf("Do you want to enter a cell phone number? (y or n): ");
    while (getchar() != '\n');
    
    scanf("%c", &i);
    if (i == 'n' || i == 'N') {
    }
    else if (i == 'y' || i == 'Y') {
        printf("Please enter the contact's cell phone number: ");
        scanf("%s", nums->cell);
    }
    
    
    printf("Do you want to enter a home phone number? (y or n): ");
    while (getchar() != '\n');
    
    scanf("%c", &i);
    if (i == 'n' || i == 'N') {
    }
    else if (i == 'y' || i == 'Y') {
        printf("Please enter the contact's home phone number: ");
        scanf("%s", nums->home);
    }
    
    printf("Do you want to enter a business phone number? (y or n): ");
    while (getchar() != '\n');
    
    scanf("%c", &i);
    if (i == 'n' || i == 'N') {
    }
    else if (i == 'y' || i == 'Y') {
        printf("Please enter the contact's business phone number: ");
        scanf("%s", nums->business);
    }
}
