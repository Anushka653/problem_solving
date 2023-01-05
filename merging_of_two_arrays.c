#include<stdio.h>
main()
{
    int a[5],b[5],c[10],m,n,i=0,j=0,k=0;
    printf("enter the no. of elements in array A: ");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no. of elements in array B: ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    while(i<=m&&j<=n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        //else
        //{
            //c[k]=b[j];
            //j++;
            //k++;
       // }
    }
    if(i>m)
    {
        while(j<=n)
            c[k]=b[j];
            j++;
            k++;
    }
    else
    {
        while(i<=m)
            c[k]=b[i];
            i++;
            k++;
    }
    printf("the required merged array : ");
    for(k=0;k<m+n;k++)
    {
        printf("%d",c[k]);
    }


}
