/*If a five digit number is input through the keyboard, write a program to reverse the number*/
/*Reverse digit of a 5-digit number*/
#include <stdio.h>
int main()
{
    int n,d5,d4,d3,d2,d1;
    long int revnum; /*offers a bigger range of integer*/
    printf("\nEnter a five digit number(Less than 32767):");
    scanf("%d", &n);
    d5=n%10; /* 5th digit*/
    n=n/10; /* remaining digit*/
    d4=n%10; /* 4th digit*/
    n=n/10; /* remaining digit*/
    d3=n%10; /* 3th digit*/
    n=n/10; /* remaining digit*/
    d2=n%10; /* 2th digit*/
    n=n/10; /* remaining digit*/
    d1=n%10; /* 1th digit*/
    n=n/10; /* remaining digit*/
    revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
    /*specifier %ld is used for printing a long integer*/
    printf("The reversed number is %ld\n",revnum);
    return 0;
}
/*
Output:
Enter five digit number(less than 32767): 12345
the reversed number is 54321
*/