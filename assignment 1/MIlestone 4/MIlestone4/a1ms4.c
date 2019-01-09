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

int main(void)
{
    // Declare variables here:
    
    struct Contact
    contact = {
        { {'\0'} },
        { 0, {'\0'}, 0, {'\0'}, {'\0'} },
        { {'\0'},{'\0'},{'\0'} },
    };
    
    // Display the title
    printf("Contact Management System\n");
    printf("-------------------------\n");
    
    // Call the Contact function getName to store the values for the Name member
    
    getName(&contact.names);
    
    // Call the Contact function getAddress to store the values for the Address member
    getAddress(&contact.addresses);
    
    // Call the Contact function getNumbers to store the values for the Numbers member
    getNumbers(&contact.nums);
    
    // Display Contact summary details
    printf("\nContact Details");
    printf("\n---------------");
    printf("\nName Details");
    printf("\nFirst name: %s", contact.names.firstName);
    printf("\nMiddle initial(s): %s", contact.names.middleInitial);
    printf("\nLast name: %s", contact.names.lastName);
    printf("\n\nAddress Details");
    printf("\nStreet number: %d", contact.addresses.streetNumber);
    printf("\nStreet name: %s", contact.addresses.street);
    printf("\nApartment: %d", contact.addresses.apartmentNumber);
    printf("\nPostal code: %s", contact.addresses.postalCode);
    printf("\nCity: %s", contact.addresses.city);
    printf("\n\nPhone Numbers:");
    printf("\nCell phone number: %s", contact.nums.cell);
    printf("\nHome phone number: %s", contact.nums.home);
    printf("\nBusiness phone number: %s\n\n", contact.nums.business);
    
    
    // Display Completion Message
    printf("Structure test for Contact using functions done!\n");
    
    return 0;
}

