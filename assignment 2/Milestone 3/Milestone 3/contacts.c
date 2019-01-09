/* -------------------------------------------
 Name: Edward Vuong
 Student number: 120246186
 Email: evuong1@myseneca.ca
 Section: SII
 Date: July 26, 2018
 ----------------------------------------------
 Assignment: 2
 Milestone:  3
 ---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include "contacts.h"
#include "contactHelpers.h"


// +---------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2   |
// |        function definitions below...              |
// |                                                   |
// | *** See hint regarding the getNumbers function    |
// +---------------------------------------------------+


// getName:
void getName (struct Name* names) {
    
    printf("Please enter the contact's first name: ");
    scanf("%s", names->firstName);
    
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    
    if (yes() == 1) {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%s", names->middleInitial);
    }
    
    printf("Please enter the contact's last name: ");
    scanf("%s", names->lastName);
}

// getAddress:
void getAddress (struct Address* address) {
    
    
    printf("Please enter the contact's street number: ");
    address->streetNumber = getInt();
    
    printf("Please enter the contact's street name: ");
    scanf(" %[^\n]", address->street);
    clearKeyboard();
    
    printf("Do you want to enter an apartment number? (y or n): ");
    
    if (yes() == 1) {
        printf("Please enter the contact's apartment number: ");
        address->apartmentNumber = getInt();
    }
    
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", address->postalCode);
    clearKeyboard();
    
    printf("Please enter the contact's city: ");
    scanf("%s", address->city);
}


// getNumbers:
// HINT:  Update this function to use the new helper
//        function "getTenDigitPhone" where applicable
void getNumbers (struct Numbers* numbers){
    char examplePhone[11];
    
    printf("Please enter the contact's cell phone number: ");
    getTenDigitPhone(examplePhone);
    scanf("%s", numbers->cell);
    
    printf("Do you want to enter a home phone number? (y or n): ");
    clearKeyboard();
    
    if (yes() == 1) {
        printf("Please enter the contact's home phone number: ");
        getTenDigitPhone(examplePhone);
        scanf("%s", numbers->home);
    }
    
    printf("Do you want to enter a business phone number? (y or n): ");
    
    if (yes() == 1) {
        printf("Please enter the contact's business phone number: ");
        getTenDigitPhone(examplePhone);
        scanf("%s", numbers->business);
    }
    
}

// getContact
void getContact (struct Contact* contact)
{
    getName(&contact->name);
    getAddress(&contact->address);
    getNumbers(&contact->numbers);
}
