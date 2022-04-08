/*If the lengths of three sides of a triangle are input through the keyboard,
write a program to find the area of the triangle*/
/* Find area of the triangle, given it sides*/
#include <stdio.h>
#include<math.h> /*for sqrt()*/
int main()
{
    float a,b,c,sp,area;
    printf("\nEnter sides of triangle:");
    scanf("%f %f %f", &a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of triangle=%f\n",area);
    return 0;
}
/*
Output:
Enter the sides of the triangle: 4 5 6
Area of triangle: 9.921567
*/