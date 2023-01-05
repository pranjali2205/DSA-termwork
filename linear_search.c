/*NAME- PRANJALI SRIVASTAVA
  SEC - A
  ROLL NO- 05
  */
#include<stdio.h>
int main()
{
    int n,i,key,found=-1,c=0,index=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    printf("enter key element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        c++;
        if(ar[i]==key)
        {
          found=1;
          index=i;
          break;
        }

    }
    if(found==1)
        printf("key element found at index %d",index);
    else
        printf("not found");
    printf("\n no. of comparisons:%d",c);
}
