/*The length and breadth of a rectangle and radius ofa circle are input through keyboard.
Write a program to calculate the area and perimeter of the reactangle, and circumference of the circle.*/
/*Calculate the perimeter of rectangle & circumference of circle*/
#include <stdio.h>
int main()
{
    int l,b,peri;
    float r,cir;
    printf("\nEnter Length and Breadth of rectangle:");
    scanf("%d %d",&l,&b);
    printf("\nEnter radius of the circle:");
    scanf("%f",&r);
    peri=2*(l+b);
    cir=2*3.14*r;
    printf("Perimeter of Rectangle= %d\n",peri);
    printf("Circumference of circle= %f\n",cir);
    return 0;
}
/*
Output:
Enter Length and breadth of rectangle: 3,4
Enter radius of rectangle: 2
Perimeter of rectangle: 14
Circumference of circle: 12.560000
*/