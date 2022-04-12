/*Bubble Sort Using Function*/
#include <stdio.h>
#include <conio.h>

void Bubblesort(int arr[], int size)
{
	int i, j, temp;
	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < (size - 1 - i); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[100], size, i;
//		clrscr();
	printf("Enter array size: ");
	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		printf("Enter %dth number element: ", i);
		scanf("%d", &arr[i]);
	}
	Bubblesort(arr, size);
	printf("\nAfter sorting: ");
	for (i = 0; i < size; i++)
		printf("%d\t", arr[i]);
	getch();
	return 0;
}
