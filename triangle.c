#include<stdio.h>
main()
{
int a,b,c;
printf("Enter the sides of triangle\n");
scanf("%d %d %d",&a,&b,&c);

   if (a==b&&b==c)
{
    printf("Your triangle is Equilateral\n");
}
else if(a==b||b==c||c==a)
{
    printf("Your triangle is Isoscelene\n");
}
    else
    {
        printf("Your triangle is scelene\n");
    }
}
