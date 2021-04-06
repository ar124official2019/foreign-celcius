#include <stdio.h>

float take_temprature(char *type) {
    float temprature;

    printf("Enter temprature in %s: ", type);

    scanf("%f", &temprature);

    return temprature;
}