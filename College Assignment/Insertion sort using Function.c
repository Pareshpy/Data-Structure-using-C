/* Insertion sort using Function */
#include<stdio.h>
#include<conio.h>
void insertionsort(int arr[],int size)
{
	int i,j,k,temp;
	for(i=1;i<size;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 && arr[j]>temp;j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}

}
int main()
{
	int arr[100],size,i;
//	clrscr();
	printf("Enter array size: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %dth number element: ",i);
		scanf("%d",&arr[i]);
	}
	insertionsort(arr,size);
	printf("\nAfter sorting: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	getch();
	return 0;
}
