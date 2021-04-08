#include "foreign-celcius.h";

int main_loop() {
    float temprature;
    float converted;
    char choice;

    do {
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
        }
    } while (choice != 'q');

    return 0;
}