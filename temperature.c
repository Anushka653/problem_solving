#include<stdio.h>
main()
{
int t;
printf("enter the temperature in celcius  temperature be less than equal to 40\n");
scanf("%d",&t);
if(t<0)
{
    printf("Freezing point\n");
}
else if (t==0||t<10)
{
    printf("Very cold water\n");
}

else if (t==10||t<20)
{
    printf("cold water\n");
}
else if (t==20||t<30)
{
    printf("Normal water\n");
}
else if (t==30||t<40)
{
    printf("Hot water\n");
}
else if (t>=40)
{
    printf("Very hot water\n");
}
}
