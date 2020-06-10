//write a program to add your bmi

#include <stdio.h>

int main (){

float height;

float weight;

printf ("enter your height:");
scanf ("%f", &height);
printf ("enter your weight :");
scanf ("%f", &weight);
float bmi = weight/(height*height);
printf ("bmi=%.3f",bmi);
return 0;
}