/* -------------------------------------------
 Name: Edward Vuong
 Student number: 120246186
 Email: evuong1@myseneca.ca
 Section: SII
 Date: June 5
 ----------------------------------------------
 Assignment: 1
 Milestone:  2
 ---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// #include your contacts header file on the next line:
#include "contacts.h"

int main (void)
{
    // Declare variables here:
    
    struct Name names = { {'\0'} };
    struct Address addresses = { 0, {'\0'}, 0, {'\0'}, {'\0'} };
    struct Numbers nums = { {'\0'},{'\0'},{'\0'} };
    char yn = '\0';
    
    
    // Display the title
    printf("Contact Management System\n");
    printf("-------------------------\n");
    
    // Contact Name Input:
    printf("Please enter the contact's first name: ");
    scanf("%s", names.firstName);
    
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    while (getchar() != '\n');

    scanf("%c", &yn);
    
    if (yn == 'n' || yn == 'N') {
    }
    else if (yn == 'y' || yn == 'Y') {
        printf("Please enter the contact's middle initial(s): ");
        scanf("%s", names.middleInitial);
    }
    
    printf("Please enter the contact's last name: ");
    scanf("%s", names.lastName);
    
    
    // Contact Address Input:
    
    printf("Please enter the contact's street number: ");
    scanf("%d", &addresses.streetNumber);
    
    printf("Please enter the contact's street name: ");
    scanf("%s", addresses.street);
    
    printf("Do you want to enter an apartment number? (y or n): ");
    while (getchar() != '\n');
    scanf("%c", &yn);
    if (yn == 'n' || yn == 'N') {
    }
    else if (yn == 'y' || yn == 'Y') {
        printf("Please enter the contact's apartment number: ");
        scanf("%d", &addresses.apartmentNumber);
    }
    
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", addresses.postalCode);
    while (getchar() != '\n');
    
    printf("Please enter the contact's city: ");
    scanf("%s", addresses.city);
    
    // Contact Numbers Input:
    
    printf("Do you want to enter a cell phone number? (y or n): ");
    while (getchar() != '\n');

    scanf("%c", &yn);
    if (yn == 'n' || yn == 'N') {
    }
    else if (yn == 'y' || yn == 'Y') {
        printf("Please enter the contact's cell phone number: ");
        scanf("%s", nums.cell);
    }
    
    
    printf("Do you want to enter a home phone number? (y or n): ");
    while (getchar() != '\n');

    scanf("%c", &yn);
    if (yn == 'n' || yn == 'N') {
    }
    else if (yn == 'y' || yn == 'Y') {
        printf("Please enter the contact's home phone number: ");
        scanf("%s", nums.home);
    }
    
    printf("Do you want to enter a business phone number? (y or n): ");
    while (getchar() != '\n');

    scanf("%c", &yn);
    if (yn == 'n' || yn == 'N') {
    }
    else if (yn == 'y' || yn == 'Y') {
        printf("Please enter the contact's business phone number: ");
        scanf("%s", nums.businesss);
    }
    
    // Display Contact Summary Details
    
    printf("\nContact Details");
    printf("\n---------------");
    printf("\nName Details");
    printf("\nFirst name: %s", names.firstName);
    printf("\nMiddle initial(s): %s", names.middleInitial);
    printf("\nLast name: %s", names.lastName);
    printf("\n\nAddress Details");
    printf("\nStreet number: %d", addresses.streetNumber);
    printf("\nStreet name: %s", addresses.street);
    printf("\nApartment: %d", addresses.apartmentNumber);
    printf("\nPostal code: %s", addresses.postalCode);
    printf("\nCity: %s", addresses.city);
    printf("\n\nPhone Numbers:");
    printf("\nCell phone number: %s", nums.cell);
    printf("\nHome phone number: %s", nums.home);
    printf("\nBusiness phone number: %s", nums.businesss);
    
    
    // Display Completion Message
    
    printf("\n\nStructure test for Name, Address, and Numbers Done!\n");
    
    return 0;
}

/*  SAMPLE OUTPUT:
 
 
 Contact Details
 ---------------
 Name Details
 First name: Tom
 Middle initial(s): Wong
 Last name: Song
 Address Details
 Street number: 20
 Street name: Keele
 Apartment: 40
 Postal code: A8A 4J4
 City: Toronto
 Phone Numbers:
 Cell phone number: 905-111-6666
 Home phone number: 705-222-7777
 Business phone number: 416-333-8888
 Structure test for Name, Address, and Numbers Done!
 */
