#include<stdio.h>
main()
{
    char ch;
    printf("enter the character \n");
    scanf("%c",&ch);

   if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

    {
        printf("Entered character is vowel\n");
    }
    else
    {
        printf("Entered character is consonant\n");
    }
}
