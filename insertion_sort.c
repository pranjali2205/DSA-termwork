
#include<stdio.h>
int main()
{
    int n,c=0,i,j,k,min=0,swap=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("enter elements in array:");
    for( i=0;i<n;i++)
        scanf("%d",&ar[i]);
         printf("original array:");
    for( i=0;i<n;i++)
        printf("%d ",ar[i]);
        	for ( i = 1; i < n; i++)
	{
		int x = ar[i];
		int j = i-1;
        c++;
		while (j > -1 && ar[j] > x)
		{
		    c++;
			ar[j + 1] = ar[j];
			j--;
		}
		ar[j+1] = x;
		swap++;
	}
	printf("\nno.of comparisons:%d\n",c);
	printf("\nno.of swaps:%d\n",swap);
    printf("array in sorted order:");
    for( i=0;i<n;i++)
        printf("%d ",ar[i]);
}
