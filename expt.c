// Lab Assignment 2: Omkar Kale
#include <stdio.h>

int main() {

    float phy, chem, math, avg;

    printf("Enter marks of Physics: ");
    scanf("%f", &phy);
    printf("Enter marks of Chemistry: ");
    scanf("%f", &chem);
    printf("Enter marks of Mathematics: ");
    scanf("%f", &math);

    avg = (phy + chem + math) / 3;

    printf("\nAverage Marks: %2f\n", avg);

    (avg >= 50) ?
    printf("\nElligible for admission. :D\n") :
    printf("\nNot Elligible for admission, better luck next time. :(\n");

    return 0;

}