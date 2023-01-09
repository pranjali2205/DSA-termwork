/*NAME- PRANJALI SRIVASTAVA
  SEC -A
  ROLL_NO -05 */
   
#include <stdio.h>
#include <stdlib.h>
int partition(int*, int ,int);
void swap(int *,int *);
void rquick_sort(int a[], int low, int high)
{
	if (low < high) {
		int p = partition(a, low, high);
		rquick_sort(a, low, p - 1);
		rquick_sort(a, p + 1, high);
	}
}
int partition(int a[], int low, int high)
{
    int random=low + rand()%(high-low+1);
    swap(&a[random],&a[high]);
	int pivot = a[high];
	int i = low - 1,j;
	for ( j = low; j < high ; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[i + 1],&a[high]);
	return (i + 1);
}
void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void display(int a[], int n)
{
    int i;
	printf("Sorted array:\n");
	for ( i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int n,i;
	printf("Enter size of array:");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of array:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	rquick_sort(a,0, n-1);
	display(a, n);
	return 0;
}

