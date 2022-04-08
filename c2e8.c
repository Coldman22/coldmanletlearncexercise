/*Write a program to receive values of latitude and longitude, in degrees, of two places on the earth and outputs the distance between then in nautical miles. The formula for distance in nautical miles is here*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float L1, L2, G1, G2, distance, distance_km, distance_nm, dL, dG;

    //input two points (place) location (latitude and longitude) in degree form
    printf("Enter the co-ordinate of first place: ");
    scanf("%f %f", &L1, &G1);

    printf("Enter the co-ordinate of second place: ");
    scanf("%f %f", &L2, &G2);

    //find out the distance between two end points using formulla
    dL = L2-L1;
    dG = G2-G1;
    distance = sqrt((dL*dL)+(dG)*(dG));
    distance_km = distance*100;

    printf("The distance between two place in kilometer: %.2f", distance_km);

    //comvert kilometer into nautical miles
    distance_nm = distance_km/1.852;

    printf("\nThe distance between two place in nautical miles: %.2f", distance_nm);

    return 0;
}
/*
Enter the coordinate of first place: 29.3789 78.10467
Enter the co-ordinate of secnd place: 29.0748 78.326885
The distance between two place in kilometer: 31.88
the distance between two place in nautical miles: 17.21
*/