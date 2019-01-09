/* ------------------------------------------------------------------
 Name: Edward Vuong
 Student number: 120246186
 Email: evuong1@myseneca.ca
 Section: SII
 Date: July 26, 2018
 ---------------------------------------------------------------------
 Assignment: 2
 Milestone:  3
 ---------------------------------------------------------------------
 Description: This header file modularizes general helper functions to
 help reduce redundant coding for common repetative tasks.
 ---------------------------------------------------------------------*/


// Hint:  This header file now has functions with parameters referring to
//        the struct Contact type so be sure to include the contacts.h header:
#include "contacts.h"

//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-2 |
// |        function prototypes below...             |
// +-------------------------------------------------+

// Clear the standard input buffer
void clearKeyboard(void);

// pause:
void paus (void);

// getInt:
int getInt (void);

// getIntInRange:
int getIntInRange (int, int);

// yes:
int yes(void);

// menu:
int menu (void);

// ContactManagerSystem:
void ContactManagerSystem (void);


// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put new function prototypes below...            |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (provided for you)
void getTenDigitPhone(char[]);

// findContactIndex (provided for you)
int findContactIndex(const struct Contact[], int, const char[]);

// displayContactHeader
void displayContactHeader (void);

// displayContactFooter:
void displayContactFooter (int);

// displayContact:
void displayContact (const struct Contact*);

// displayContacts:
void displayContacts (const struct Contact[], int);

// searchContacts:
void searchContacts (const struct Contact[], int);

// addContact:
void addContact (struct Contact[], int);

// updateContact:
void updateContact (struct Contact[], int);

// deleteContact:
void deleteContact (struct Contact[], int);

// sortContacts:
void sortContacts (struct Contact[], int);