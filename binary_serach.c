/* NAME - PRANJALI SRIVASTAVA
   SEC - A
   ROLL NO- 05
 */
#include<stdio.h>
void binary_search(int ar[], int i, int j, int key)
{
    int mid,c=0;

    if (i > j)
    {
        printf("Key not found\n");
        return;
    }
    mid = (i + j) / 2;
    c++;
    if (ar[mid] == key)
    {
        printf("Key found at index %d\n",mid);
    }
    else if (ar[mid] > key)
    {
        binary_search(ar, i, mid - 1, key);
    }
    else if (ar[mid] < key)
    {
        binary_search(ar, mid + 1, j, key);
    }
}
int main()
{
     int n,i,key,found=-1,c=0,index=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int low=0;
    int high=n-1;
    int mid=(low+high)/2;
    int ar[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("enter key element to search:");
    scanf("%d",&key);

   binary_search(ar,low,high,key);
}
