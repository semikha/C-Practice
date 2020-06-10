//write a program using if statement to check if the age is 21

#include <stdio.h>
int main (){
    int age;
    printf ("enter your age");
    scanf ("%d",&age);

    if (age >= 21)
    
    {
        printf ("allow to buy alchohol\n");
    }
    if (age <21)
{
    printf ("not allowed\n");
    }
    return 0;
}