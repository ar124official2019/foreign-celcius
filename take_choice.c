#include <stdio.h>

char take_choice() {
    char choice;
    
    printf("Enter choice: \n");
    printf("\t c or C for Celcius to Foreign\n");
    printf("\t f or F for Foreign to Celcius\n");
    printf("\t q to terminate / close program\n");
    printf("> ");

    choice = getchar();

    return choice;
}