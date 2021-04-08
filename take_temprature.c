#include <stdio.h>

float take_temprature(char *type) {
    float temprature;

    printf("Enter temprature in %s: ", type);

    char enter = '\0';
    scanf("%f%c", &temprature, &enter);

    return temprature;
}