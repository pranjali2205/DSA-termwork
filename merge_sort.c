/* NAME - Pranjali Srivastava
   ROLL_NO- 05
   SEC -A
   */
#include <stdio.h>
void merge(int *, int ,int , int);
void merge_sort(int a[], int l, int h)
{
	if (l < h)
	{
		int mid = l + (h - l) / 2;
		merge_sort(a, l, mid);
		merge_sort(a, mid + 1, h);
		merge(a, l, mid, h);
	}
}
void merge(int a[], int l, int mid, int h)
{
	int i = l, j = mid+1, k = l;
	int b[100];
	while (i <= mid && j <= h)
	{
		if (a[i] < a[j])
			b[k++] = a[i++];
		else
			b[k++] = a[j++];
	}
	for (; i <= mid ; i++)
	{
		b[k++] = a[i];
	}
	for (; j <= h; j++)
	{
		b[k++] = a[j];
	}
	for (i = l; i <= h; i++)
	{
		a[i] = b[i];
	}
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
	merge_sort(a, 0, n-1);
	display(a, n);
	return 0;
}
