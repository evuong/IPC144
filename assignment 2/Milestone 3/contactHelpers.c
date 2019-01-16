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
#include <ctype.h>

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:

#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:

#include "contactHelpers.h"

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard (void)
{
    while (getchar() != '\n');  // empty execution code block on purpose
}

// pause:
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
    return option;
}


// ContactManagerSystem:
void ContactManagerSystem (void)
{
    int done = 0;
    
    while (!done){
        int option = menu();
        switch (option){
            case 1:
                printf("\n<<< Feature 1 is unavailable >>>\n\n");
                paus ();
                printf("\n");
                break;
            case 2:
                printf("\n<<< Feature 2 is unavailable >>>\n\n");
                paus ();
                printf("\n");
                break;
            case 3:
                printf("\n<<< Feature 3 is unavailable >>>\n\n");
                paus ();
                printf("\n");
                break;
            case 4:
                printf("\n<<< Feature 4 is unavailable >>>\n\n");
                paus ();
                printf("\n");
                break;
            case 5:
                printf("\n<<< Feature 5 is unavailable >>>\n\n");
                paus ();
                printf("\n");
                break;
            case 6:
                printf("\n<<< Feature 6 is unavailable >>>\n\n");
                paus ();
                printf("\n");
                break;
            default:
                printf("\nExit the program? (Y)es/(N)o: ");
                if (yes() == 1) {
                    printf("\nContact Management System: terminated");
                    done = 1;
                }
                printf("\n");
        }
    }
}
    
// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10 chars entered)
void getTenDigitPhone(char telNum[])
{
    int needInput = 1;
    
    while (needInput == 1) {
        scanf("%10s", telNum);
        clearKeyboard();
        
        // (String Length Function: validate entry of 10 characters)
        if (strlen(telNum) == 10) {
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
    return -1;
}


// displayContactHeader
void displayContactHeader () {
    
}

// displayContactFooter
void displayContactFooter (int placeholder) {
    
}

// displayContact:
void displayContact (const struct Contact* contact) {
    
}

// displayContacts:
void displayContacts (const struct Contact contact[], int placeholder) {
    
}

// searchContacts:
void searchContacts (const struct Contact contact[], int placerholder) {
    
}

// addContact:
void addContact (struct Contact contact[], int placeholder) {
    
}

// updateContact:
void updateContact (struct Contact contact[], int placeholder) {
    
}

// deleteContact:
void deleteContact (struct Contact contact[], int placeholder) {

}

// sortContacts:
void sortContacts (struct Contact contact[], int placeholder) {
    
}
