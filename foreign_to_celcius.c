#include <math.h>

float foreign_to_celcius(float temprature) {
    float converted;
    converted = ceil(temprature * 9 / 5 + 32);
    return converted;
}