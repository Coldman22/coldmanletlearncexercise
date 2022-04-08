/*what will be the output of the following program?*/
#include <stdio.h>
int main()
{
    float a=5, b=2;
    int c,d;
    c=a % b;
    d=a/2;
    printf("%d\n",d);
    return 0;
}
/*
#include <stdio.h>
int main()
{
    float a=5, b=2;
    int c,d;
    c=a % b;
    d=a/2;
    printf("%d\n",d);
    return 0;
}
Output : throws an error= invlaid operands to binary %(have 'float' and ' float')

#include <stdio.h>
int main()
{
    float a=5, b=2;
    int c,d;
    c=a / b;
    d=a/2;
    printf("%d\n",d);
    return 0;
}
Output: 2
*/
