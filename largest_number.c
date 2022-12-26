#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest number",a);
        }
        else if  (c>a)
        {
             printf("%d is the greatest number",c);
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
             printf("%d is the greatest number",b);
        }
        else if (c>b)
        {
             printf("%d is the greatest number",c);
        }
    }

}
