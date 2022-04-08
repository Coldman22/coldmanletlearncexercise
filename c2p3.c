/*Consider a currency system in which there are notes of six denominations
Namely Rs1, Rs2, Rs5, Rs 20, Rs 50, Rs 100.
If  sum of Rs.N is entered through keyboard.
write  aprogram to compute the smallest number of note that will combine to give Rs. N.*/
#include <stdio.h>
int main()
{
    int amount,nohun, nofifty, noten, nofive, notwo, noone, total;
    printf("\nEnter the amount:");
    scanf("%d", &amount);
    nohun=amount/100;
    amount=amount%100;
    nofifty=amount/50;
    amount=amount%50;
    noten=amount/10;
    amount=amount%10;
    nofive=amount/5;
    amount=amount%5;
    notwo=amount/2;
    amount=amount%2;
    noone=amount/1;
    amount=amount%1;
    total=nohun+nofifty+noten+nofive+notwo+noone;
    printf("Smallest number of note=%d",total);
    return 0;
}
/*
output:
Enter the amount: 570
Smallest number of note=8
*/