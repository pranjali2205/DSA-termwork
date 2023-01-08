/* NAME - Pranjali Srivastava
   ROLL_NO- 05
   SEC -A
   */
#include <stdio.h>
int partition(int*, int ,int);
void swap(int *,int *);
void quick_sort(int a[], int low, int high)
{
	if (low < high) {
		int p = partition(a, low, high);
		quick_sort(a, low, p - 1);
		quick_sort(a, p + 1, high);
	}
}
int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i = low - 1;
	for (int j = low; j < high - 1; j++)
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
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d", &n);
	int a[n];
	printf("Enter elements of array:");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	quick_sort(a,0, n-1);
	display(a, n);
	return 0;
}

