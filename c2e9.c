/*Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower than the air temperature, and is calculated as per the following formula: Write a program to receive values of temperature and wind velocity and calculate wind chill factor.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float temp, wind, wcf;

    //input temperature in fahrenheit
    printf("Enter air temperature in Fahrenheit: ");
    scanf("%f", &temp);

    //input wind velocity (speed) in miles per hours (mph)
    printf("Enter the wind speed in mph: ");
    scanf("%f", &wind);

    wcf = 35.74 + 0.6215*temp + (0.4275*temp - 35.75) * pow(wind,0.16);

    printf("Wind Chill Factor in Fahrenheit: %.2f",wcf);

    return 0;
}
/*
enter air temperature in fahrenheit: 5
enter the wind speed in mph: 5
Wind chill factor in fahrenheit: -4.64
*/