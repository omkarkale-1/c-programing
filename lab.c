// Lab Assignment 1: Omkar Kale

#include <stdio.h>

int main() {
    // define var
    char name[] = "Omkar Kale";     //MY NAME
    int age = 21;                    //MY AGE
    char class_name[] = "Computer Engineering";        //MY CLASS NAME
    char division = 'D';           //MY DIVISION
    char UIN[] = "251P134";        //MY UIN
    char Batch[] = "D3";         //MY BATCH

    //printing the details using escape sequences for formatting
    printf("Student Details:\n\n");
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("Class Name : %s\n", class_name);
    printf("Division   : %c\n", division);
    printf("UIN        : %s\n", UIN);
    printf("Batch      : %s\n", Batch);

    return 0;
}