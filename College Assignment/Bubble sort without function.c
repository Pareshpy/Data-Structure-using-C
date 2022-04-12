/*Bubble Sort Using Without Function*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int arr[100],size,i,j,temp;
//	clrscr();
	printf("Enter array size: ");
	scanf("%d",&size);

	for(i=0;i<size;i++)
	{
		printf("Enter %dth number element: ",i);
		scanf("%d",&arr[i]);
	}

	printf("Before sorting: ");
	for(i=0;i<size;i++)
	printf("%d\t",arr[i]);

	for(i=0;i<(size-1);i++)
	{
		for(j = 0;j<(size-1-i);j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	printf("\nAfter sorting: ");
	for(i=0;i<size;i++)
	printf("%d\t",arr[i]);
	getch();
	return 0;
}
