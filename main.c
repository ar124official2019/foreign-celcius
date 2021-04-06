#include <stdio.h>
#include "foreign-celcius.h"

int main() {
    char choice;
    float temprature;
    float converted;

    // input choice
    choice = take_choice();

    // process choice
    if (choice == 'c' || choice == 'C') {
        // input temprature
        temprature = take_temprature("celcius");

        // process temprature
        converted = celcius_to_foreign(temprature);

        // output
        display("celcius", "foreign", temprature, converted);
        
    } else if (choice == 'f' || choice == 'F') {
        temprature = take_temprature("foreign");

        converted = foreign_to_celcius(temprature);
  
        display("foreign", "celcius", temprature, converted);
    } else {
        printf("Wrong choice! Exiting...");
        return 1;
    }

    return 0;
}