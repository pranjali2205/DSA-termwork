/*NAME- PRANJALI SRIVASTAVA
  SEC - A
  ROLL NO- 05
  */
int fib(int n)                //Memoization
{
    if (n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
        {
            F[n-2]=fib(n-2);
        }
        if(F[n-1]==-1)
        {
            F[n-1]=fib(n-1);
        }
        return F[n-1]+F[n-2];
    }
}
int main()
{
    for(int i=0;i<10;i++)
    {
        F[i]=-1;
    }
    int n,m=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    printf("Terms:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d " ,fib(m));
        m++;
    }
    

    return 0;
}
