#include<stdio.h>
main()
{
 int array[100], position, i, n;
 printf("Enter number of elements in array: ");
 scanf("%d", &n);
 printf("Enter the elements\n");
 for ( i = 0 ; i < n ; i++ ){
        scanf("%d", &array[i]);
 }
 printf("Enter the location where you wish to delete element\n");
 scanf("%d", &position);
 if ( position >= n+1 )
 printf("Deletion is not possible.\n");
 else
 {
 for (i=position - 1; i< n - 1; i++ )
 array[i]=array[i+1];
 printf("Resultant array is\n");
 for( i = 0 ; i< n - 1 ; i++ )
 printf("%d\n", array[i]);
 }
}


