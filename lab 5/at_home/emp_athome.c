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

#define SIZE 4


int main(void) {
    
    //variable declaration
    int option = 0;
    int numEmployees = 0;
    int i = 0;
    int guessID;
    int end = 0; //ends the loop once correct employee ID is entered
    
    //structure declaration
    struct info {
        int id;
        int age;
        double salary;
    };
    
    //initializing structure to 0
    struct info emp[SIZE] = {{0,0,0}};
    
    
    printf("---=== EMPLOYEE DATA ===---\n\n");
    
    do {
        // Print the option list
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("3. Update Employee Salary\n");
        printf("4. Remove Employee\n");
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
                
               //only print employee data if their ID isn't 0
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
                
                //checks to see if max employee size has been reached
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
                
            case 3:    //Update Employee Salary
                
                printf("Update Employee Salary\n");
                printf("======================\n");
                
                do {
                    printf("Enter Employee ID: ");
                    scanf("%d", &guessID);
                    end = 0;
                    
                    //changes employee salary if number matches
                    for (i = 0; i < SIZE; i++) {
                        if (emp[i].id == guessID) {
                            printf("The current salary is %.2lf\n", emp[i].salary);
                            printf("Enter Employee New Salary: ");
                            scanf("%lf", &emp[i].salary);
                            printf("\n");
                            end = 1; //breaks the loop
                        }
                    }
                } while (end != 1); //breaks the loop
                
                break;
            
            case 4:     //Remove Employee
                printf("Remove Employee\n");
                printf("===============\n");
                end = 0;
                
                do {
                    printf("Enter Employee ID: ");
                    scanf("%d", &guessID);
                    
                    for (i = 0; i < SIZE; i++) {
                        if (emp[i].id == guessID) {
                            printf("Employee %d will be removed\n\n", emp[i].id);
                            emp[i].id = 0;          //sets employee ID to 0 so it won't print anymore
                            numEmployees--;         //lowers employee count by interval of 1
                            end = 1; //breaks the loop
                        }
                    }
                } while (end != 1); //breaks the loop
                
                break;
                
            default:
                printf("ERROR: Incorrect Option: Try Again\n\n");
        }
    } while (option != 0);
    
    return 0;
}
