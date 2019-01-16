/* -------------------------------------------
 Name: Edward Vuong
 Student number: 120246186
 Email: evuong1@myseneca.ca
 Section: SII
 Date: July 31, 2018
 ----------------------------------------------
 Assignment: 2
 Milestone:  4
 ---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:

#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:

#include "contactHelpers.h"

// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):

#define MAXCONTACTS 5

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard (void)
{
    while (getchar() != '\n');  // empty execution code block on purpose
}

// paus:
void paus (void)
{
    printf("(Press Enter to Continue)");
    clearKeyboard();
}


// getInt:
int getInt (void)
{
    char NL = 'x';
    int value = 0;
    
    scanf ("%d%c", &value, &NL);
    
    while (NL != '\n' ) {
        if (NL !='\n') {
            clearKeyboard();
        }
        printf("*** INVALID INTEGER *** <Please enter an integer>: ");
        scanf ("%d%c", &value, &NL);
    }
    return value;
}

// getIntInRange:
int getIntInRange (int min, int max)
{
    int num;
    num = getInt();
    
    while (num > max || num < min) {
        printf ("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
        num = getInt();
    }
    
    return num;
}



// yes:
int yes (void)
{
    char NL = 'x';
    char yn = '\0';
    int option = 0;
    
    scanf ("%c%c", &yn, &NL);
    
    while ((yn != 'y' || yn != 'Y' || yn != 'n' || yn != 'N') && NL != '\n') {
        
        if (NL != '\n') {
            clearKeyboard();
        }
        printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
        scanf ("%c%c", &yn, &NL);
    }
    
    if (yn == 'y' || yn == 'Y') {
        option = 1;
    }
    else if (yn == 'n' || yn == 'N') {
        option = 0;
    }
    
    return option;
}

// menu:
int menu (void)
{
    int option;
    
    printf("Contact Management System\n");
    printf("-------------------------\n");
    printf("1. Display contacts\n");
    printf("2. Add a contact\n");
    printf("3. Update a contact\n");
    printf("4. Delete a contact\n");
    printf("5. Search contacts by cell phone number\n");
    printf("6. Sort contacts by cell phone number\n");
    printf("0. Exit\n\n");
    printf("Select an option:> ");
    option = getIntInRange(0, 6);
    printf("\n");
    return option;
}


// ContactManagerSystem:
void ContactManagerSystem (void)
{
    int done = 0;
    
    struct Contact contacts[MAXCONTACTS] = { { { "Rick", {'\0'}, "Grimes" },
        { 11, "Trailer Park", 0, "A7A 2J2", "King City" },
        { "4161112222", "4162223333", "4163334444" } },
        {
            { "Maggie", "R.", "Greene" },
            { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
            { "9051112222", "9052223333", "9053334444" } },
        {
            { "Morgan", "A.", "Jones" },
            { 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" }, { "7051112222", "7052223333", "7053334444" } },
        {
            { "Sasha", {'\0'}, "Williams" },
            { 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
            { "9052223333", "9052223333", "9054445555" } },
    };
    
    while (!done){
        int option = menu();
        switch (option){
            case 1:
                displayContacts(contacts, MAXCONTACTS);
                paus ();
                printf("\n");
                break;
            case 2:
                addContact(contacts, MAXCONTACTS);
                paus ();
                printf("\n");
                break;
            case 3:
                updateContact(contacts, MAXCONTACTS);
                paus ();
                printf("\n");
                break;
            case 4:
                deleteContact(contacts, MAXCONTACTS);
                paus ();
                printf("\n");
                break;
            case 5:
                searchContacts(contacts, MAXCONTACTS);
                paus ();
                printf("\n");
                break;
            case 6:
                sortContacts(contacts, MAXCONTACTS);
                paus ();
                printf("\n");
                break;
            default:
                printf("Exit the program? (Y)es/(N)o: ");
                if (yes() == 1) {
                    printf("\nContact Management System: terminated");
                    done = 1;
                }
                printf("\n");
        }
    }
}


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        empty function definitions below...      |
// +-------------------------------------------------+

// getTenDigitPhone:
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;
    int i;
    
    while (needInput == 1) {
        
        int wrong = 0;
        
        scanf("%10s", telNum);
        clearKeyboard();
        
        //checking if every character is a number or not
        for (i = 0; i < 10; i++) {
            if (isdigit(telNum[i])) {
            }
            else {
                wrong++;
            }
        }
        
        // (String Length Function: validate entry of 10 characters)
        if (strlen(telNum) == 10 && wrong == 0) {
            needInput = 0;
        }
        else {
            printf("Enter a 10-digit phone number: ");
        }
    }
}

// findContactIndex:
int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
    int i;
    int position = -1;
    
    for (i = 0; i < size; i++) {
        if (strcmp (cellNum, contacts[i].numbers.cell) == 0) {
            position = i;
        }
    }
    
    return position;
}


// displayContactHeader
void displayContactHeader () {
    printf("+-----------------------------------------------------------------------------+\n");
    printf("|                              Contacts Listing                               |\n");
    printf("+-----------------------------------------------------------------------------+\n");
    
}

// displayContactFooter
void displayContactFooter (int size) {
    printf("+-----------------------------------------------------------------------------+\n");
    printf("Total contacts: %d\n\n", size);
}

// displayContact:
void displayContact (const struct Contact* contact) {
    printf (" %s", contact->name.firstName);
    
    if (*contact->name.middleInitial == 0) {
        printf(" ");
    }
    else {
        printf(" %s ", contact->name.middleInitial);
    }
    printf("%s\n", contact->name.lastName);
    printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);
    printf("       %d %s, ", contact->address.streetNumber, contact->address.street);
    
    if (contact->address.apartmentNumber > 0) {
        printf("Apt# %d, ", contact->address.apartmentNumber);
    }
    printf("%s, %s\n", contact->address.city, contact->address.postalCode);
}

// displayContacts:
void displayContacts (const struct Contact contact[], int size) {
    int i;
    int num = 0;    //running count of the num of contacts
    displayContactHeader();
    
    //checks to see if number field has anything in it, if yes, display the contact
    for (i = 0; i < size; i++) {
        if (*contact[i].numbers.cell > 0) {
            displayContact(&contact[i]);
            num++;
        }
    }
    displayContactFooter(num);
}

// searchContacts:
void searchContacts (const struct Contact contact[], int size) {
    char phone[11];
    int index;
    
    printf("Enter the cell number for the contact: ");
    getTenDigitPhone(phone);
    index = findContactIndex(contact, size, phone);     //checks cell number against current database
    
    if (index != -1) {
        printf("\n");
        displayContact(&contact[index]);
        printf("\n");
    }
    else {
        printf("*** Contact NOT FOUND ***\n");
    }
}

// addContact:
void addContact (struct Contact contact[], int size) {
    int i;
    int empty = 0;
    int full = 0;
    
    for (i = 0; i < size; i++) {
        if (strlen(contact[i].numbers.cell) == 0) {     //if empty, you can add a contact in that space
            empty = i;
            break;
        }
        else {
            full++;     // if not empty, adds to number of contacts until it can see that its full
        }
    }
    
    if (full == size) {
        printf("*** ERROR: The contact list is full! ***\n");
    }
    else {
        getContact(&contact[empty]);
        printf("--- New contact added! ---\n");
    }
}

// updateContact:
void updateContact (struct Contact contact[], int size) {
    char cell[11];
    int update;
    
    printf("Enter the cell number for the contact: ");
    getTenDigitPhone(cell);
    
    update = findContactIndex(contact, MAXCONTACTS, cell);
    if (update == -1) {
        printf("*** Contact NOT FOUND ***\n");
    }
    else {
        printf("\nContact found:\n");
        displayContact(&contact[update]);
        printf("\nDo you want to update the name? (y or n): ");
        if (yes() == 1) {
            getName(&contact[update].name);
        }
        printf("Do you want to update the address? (y or n): ");
        clearKeyboard();
        if (yes() == 1) {
            getAddress(&contact[update].address);
        }
        printf("Do you want to update the numbers? (y or n): ");
        clearKeyboard();
        if (yes() == 1) {
            getNumbers(&contact[update].numbers);
        }
        printf("--- Contact Updated! ---\n");
    }
}

// deleteContact:
void deleteContact (struct Contact contact[], int size) {
    char cell[11];
    int delete;
    
    printf("Enter the cell number for the contact: ");
    getTenDigitPhone(cell);
    
    delete = findContactIndex(contact, MAXCONTACTS, cell);
    if (delete == -1) {
        printf("*** Contact NOT FOUND ***\n");
    }
    else {
        printf("\nContact found:\n");
        displayContact(&contact[delete]);
        printf("\nCONFIRM: Delete this contact? (y or n): ");
        if (yes() == 1) {
            *contact[delete].numbers.cell = '\0';
            *contact[delete].name.middleInitial = '\0';
            contact[delete].address.apartmentNumber = 0;
            printf("--- Contact deleted! ---\n");
        }
    }
}

// sortContacts:
void sortContacts (struct Contact contact[], int size) {
    
    int i, j;
    struct Contact temp;
    
    //code is copied from ipc notes website (bubble sort)
    for (i = size - 1; i > 0; i--) {
        for (j = 0; j < size - 1; j++) {
            if (strcmp(contact[j].numbers.cell, contact[j+1].numbers.cell) > 0) {
                temp = contact[j];
                contact[j] = contact[j+1];
                contact[j+1] = temp;
            }
        }
    }
    printf("--- Contacts sorted! ---\n");
}
