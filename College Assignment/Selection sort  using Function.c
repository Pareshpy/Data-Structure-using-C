/* Selection sort using Function*/
#include <stdio.h>
#include <conio.h>
void Selectionsort(int arr[], int size)
{
	int i, j, temp, min;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}
int main()
{
	int arr[100], size, i;
	// clrscr();
	printf("Enter array size: ");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		printf("Enter %dth number element: ", i);
		scanf("%d", &arr[i]);
	}
	Selectionsort(arr, size);

	printf("\nAfter sorting: ");
	for (i = 0; i < size; i++)
	{
		printf("%d    ", arr[i]);
	}
	getch();
	return 0;
}
