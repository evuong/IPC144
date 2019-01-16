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

// Structure type Name declaration (Milestone 1)
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

// Structure type Address declaration
struct Address {
    int streetNumber;
    char street[41];
    int apartmentNumber;
    char postalCode[8];
    char city[41];
};

// Structure type Numbers declaration
struct Numbers {
    char cell[21];
    char home[21];
    char business[21];
};

// Structure type Contact declaration
struct Contact {
    struct Name names;
    struct Address addresses;
    struct Numbers nums;
};



//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// ====== Milestone 4 =======

// Get and store from standard input the values for Name
void getName (struct Name*);


// Get and store from standard input the values for Address
void getAddress (struct Address*);

// Get and store from standard input the values for Numbers
void getNumbers (struct Numbers*);
