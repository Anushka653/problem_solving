#include <stdio.h>
main()
{
    int b,allow,ts;
    float hra,da,pf;
    char c;
    printf("enter the basic salary :");
    scanf("%d",&b);
    printf("enter the grade\n");
    scanf("%c",&c);
    hra=0.20*b;
    da=0.50*b;
    pf=0.11*b;

    if (c=='A')
    {
        allow=1700;
    }
    else if(c=='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    ts=b+hra+da+allow-pf;

    printf("Total salary is %d",ts);
}
