/*Paper of size A0 has dimension 1189mm*841mm.
Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorters sides.
Thus, paper of size A1 would have dimenion 841mm*594mm.
write a program to calculate and print paper size A0,A1,A2...A8*/
/*Calculate the paper size of A0,A1,A2,A3,A4,A5,A6,A7,A8*/
#include <stdio.h>
int main()
{
    int A0,A1,A2,A3,A4,A5,A6,A7,A8;
    printf("\nEnter the dimension of A0:");
    scanf("%d",&A0);
    A1=A0/2;
    A2=A1/2;
    A3=A2/2;
    A4=A3/2;
    A5=A4/2;
    A6=A5/2;
    A7=A6/2;
    A8=A7/2;
    printf("Paper A1= %d\n",A1);
    printf("Paper A2= %d\n",A2);
    printf("Paper A3= %d\n",A3);
    printf("Paper A4= %d\n",A4);
    printf("Paper A5= %d\n",A5);
    printf("Paper A6= %d\n",A6);
    printf("Paper A7= %d\n",A7);
    printf("Paper A8= %d\n",A8);
}
/*
Output:
A0:1189mm*841mm
A1:841mm*594mm
A2:594mm*297mm
A3:297mm*148mm
A4:148mm*74mm
A5:74mm*37mm
A6:37mm*18mm
A7:18mm*9mm
A8:9mm*4mm
*/