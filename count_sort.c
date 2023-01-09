/*NAME- PRANJALI SRIVASTAVA
  SEC -A
  ROLL_NO -05 */
  #include<stdio.h>
int maximum(int ar[],int n)
{
    int i,max=ar[0];
    for(i=0;i<n;i++)
    {
        if(max<ar[i]);
        max=ar[i];
    }
    return max;
}
void count_sort(int ar[],int n)
{
    int i=0,j=0;
    int m=maximum(ar,n);
    int count[m+1];
    for(i=0;i<m+1;i++)
        count[i]=0;
    for(j=0;j<n;j++)
        count[ar[j]]=count[ar[j]]+1;
    int k=0,l=0;
    while(k<=m)
    {
        if(count[k]>0)
        {
            ar[l++]=k ;
            count[k]--;
        }
        else
            k++;
    }
}
void print(int ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);
}
int main()
{
    int n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    int ar[n];
    printf("enter elements in array:");
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    printf("original array:");
    print(ar,n);
    count_sort(ar,n);
    printf("sorted array:");
    print(ar,n);
}

