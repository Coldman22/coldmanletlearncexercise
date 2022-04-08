/*If value of an angle is input through the keyboard, 
write a program to print all its Trigonometric ratios.*/
#include <stdio.h>
#include <math.h>

int main()
{
    float degree, radian;
    float PI = 3.14159;

    printf("Enter angle in degree\n");
    scanf("%f",&degree);

    radian = degree * (PI / 180.0);

    printf("Sin(%f) = %f\n", degree, sin(radian));
    printf("Cos(%f) = %f\n", degree, cos(radian));
    printf("Tan(%f) = %f\n", degree, tan(radian));
    printf("Cosec(%f) = %f\n", degree, 1/sin(radian));
    printf("Sec(%f) = %f\n", degree, 1/cos(radian));
    printf("Cot(%f) = %f\n", degree, 1/tan(radian));

    return 0;
}
/*
Enter angle in degree
30
Sin(30.000000) = 0.500000
Cos(30.000000) = 0.866026
Tan(30.000000) = 0.577350
Cosec(30.000000) = 2.000001
Sec(30.000000) = 1.154700
Cot(30.000000) = 1.732052
*/
