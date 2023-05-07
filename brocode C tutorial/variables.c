#include <stdio.h>
int main()
{
    int x; // we just declared x as a variable of an integer type
    x = 123; // this is initialisation of the variable x
    int y = 12; // we declared and initialised a variable in the same line

    int age = 2023; // integer number
    float gpa = 2.34; //floating point number basically decimal number
    char initial = 'A'; // single character
    char name[] = "okay"; // emulated char to store multiple characters - this is known as an array

    printf("My age is %d \n", age); /* here we are using the value stored in the age variable to be 
    displayed in the output. The %d denotes decimal and is used when we are referencing integer variables
    we then mention the variable that we want after the double quotes - in our case, it is the age*/
    printf("My name is %s \n", name); // %s is for string
    printf("My average grade is %c \n", initial); //%c is for char
    printf("Your GPA is %f \n", gpa);
    return 0;
}