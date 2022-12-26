#include<stdio.h>
main()
{
    int x,y;
    printf("Enter the value of both the coordinate x and y\n");
    scanf("%d%d",&x,&y);
    if (x>=0&&y>=0)
    {
        printf("you are in quadrant 1\n");
    }
    if (x<0&&y>=0)
    {
        printf("you are in quadrant 2\n");
    }
    if (x<0&&y<0)
    {
        printf("you are in quadrant 3\n");
    }
    if (x>=0&&y<0)
    {
        printf("you are in quadrant 4\n");
    }
    printf("THANK YOU !!");
}
