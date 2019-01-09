/*
 Name: Edward Vuong
 Student number: 120246186
 Email: evuong1@myseneca.ca
 Workshop: 5
 Section: SII
 Date: June 14, 2018
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 2


int main(void) {
    
    int option = 0;
    int numEmployees = 0;
    int i = 0;
    
    struct info {
        int id;
        int age;
        double salary;
    };
    
    struct info emp[SIZE] = {{0,0,0}};
    
    
   printf("---=== EMPLOYEE DATA ===---\n\n");
    
    do {
        // Print the option list
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("0. Exit\n\n");
        printf("Please select from the above options: ");
        
        // Capture input to option variable
        scanf("%d",&option);
        printf("\n");
        
        switch (option) {
                
            case 0:    // Exit the program
                printf("Exiting Employee Data Program. Good Bye!!!\n");
                break;
                
            case 1: // Display Employee Data
                
                printf("EMP ID  EMP AGE EMP SALARY\n");
                printf("======  ======= ==========\n");

                for (i = 0; i < SIZE; i++) {
                    if (emp[i].id > 0) {
                        printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
                    }
                }
               
                printf("\n");
                break;
                
            case 2:    // Adding Employee
                
                printf("Adding Employee\n");
                printf("===============\n");
                
                if (numEmployees >= SIZE) {
                    printf("ERROR!!! Maximum Number of Employees Reached\n\n");
                }
                
                else {
                printf("Enter Employee ID: ");
                scanf("%d", &emp[numEmployees].id);
                printf("Enter Employee Age: ");
                scanf("%d", &emp[numEmployees].age);
                printf("Enter Employee Salary: ");
                scanf("%lf", &emp[numEmployees].salary);
                numEmployees++;
                printf("\n");
                }
                break;
            default:
                printf("ERROR: Incorrect Option: Try Again\n\n");
        }
        
    } while (option != 0);
    
    
    return 0;
}
