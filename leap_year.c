#include <stdio.h>
main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    (year % 4 == 0 && year % 100!= 0 || year%400 == 0) ?printf("Leap year"):printf("Not leap year");
}
