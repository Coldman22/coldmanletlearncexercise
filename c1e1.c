/*Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees*/
/*Convert Fehrenheit degrees into Centigrade degrees*/
#include <stdio.h>
int main()
{
    float F,C;
    printf("\nEnter the degree in Fehrenheit:");
    scanf("%f", &F);
    C=(F-32)*5/9;
    printf("Degrees in Centigrade= %f\n",C);
    return 0;
}
/*
Output:
Enter the degree in Fehrenheit: 100
Degree in Centigrade= 37.777779
*/