/*NAME- PRANJALI SRIVASTAVA
  SEC - A
  ROLL NO- 05
  */
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
    	for ( i = 0; i < n - 1; i++)
	{
		for (j = k = i; j < n; j++)
		{
		    c++;
			if (ar[j] < ar[i])
				k = j;
		}
		int temp = ar[i];
		ar[i] = ar[k];
		ar[k] = temp;
		swap++;
	}
     printf("\nno.of comparisons:%d\n",c);
     printf("\nno.of swaps:%d\n",swap);
    printf("array in sorted order:");
    for( i=0;i<n;i++)
        printf("%d ",ar[i]);
}


