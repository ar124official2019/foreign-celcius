#ifndef __FORIEGN_CELCIUS
#define __FORIEGN_CELCIUS

/**
* Execute the major tasks again and again
*/
int main_loop();

/**
* Input the choice of user about
* Conversion action
*/
char take_choice();

/**
* Input temprature
* @param type type of input
*/
float take_temprature(char *);

/**
* Convert to foreign
* @param temprature temprature in celcius
*/
float celcius_to_foreign(float);

/**
* Convert to celcius
*/
float foreign_to_celcius(float);

/**
* display temprature
* @param type Type of input temprature
* @param output output temprature
*/
void display(char *, char *, float, float);

#endif