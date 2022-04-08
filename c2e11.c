/*Two number are input through the keyboard into two two locations C and D.
 write a program to interchange the contents of C and D.*/
#include <stdio.h>

int main()
{
    float C,D;    /*C and D are two variables*/
   
    printf("enter value of C and D respectivly:");
    scanf("%f%f",&C,&D);
   
    /*steps to interchange value of two variables*/
    C=C+D;
    D=C-D;
    C=C-D;
   
    printf("value of C is %f\nvalue of D is %f\n",C,D);
   
    return 0;
}
/*
output :
enter value of C and D respectivly:5
4
value of C is 4.000000
value of D is 5.000000
*/