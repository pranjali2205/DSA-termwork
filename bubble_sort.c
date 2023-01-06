#include<stdio.h>
int main()
{
    int n,c=0,i,j,swap=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("enter elements in array:");
    for( i=0;i<n;i++)
        scanf("%d",&ar[i]);
         printf("original array:");
    for( i=0;i<n;i++)
        printf("%d ",ar[i]);
    for( i=0;i<n-1;i++)
    {
        for( j=0;j<n-i-1;j++)
        {
            c++;
            if(ar[j]>ar[j+1])
            {
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                swap++;
            }
        }
    }
    printf("\nno.of comparisons:%d\n",c);
    printf("\nno.of swaps:%d\n",swap);
    printf("array in sorted order:");
    for( i=0;i<n;i++)
        printf("%d ",ar[i]);
}
