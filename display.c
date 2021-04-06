#include <stdio.h>

void display(char * input_type, char *output_type, float input, float output) {
    printf("%f %s to %s is: %f\n", input, input_type, output_type, output);
}