//Binary search using function
#include<stdio.h>
#include<conio.h>
int binary_search(int*item,int target,int n)
{
	int i;
	int low=0,high=n-1,mid;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(item[mid]==target)
		{
			return mid;
			break ;
		}
		else if(item[mid]<target)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
		mid=(low+high)/2;
	}
	if (low>high)
	{
		return -1;
	}
}
int main()
{
	int item[30],i,target,n,pos;
	printf("Enter the number of item that you want to input\t:");
	scanf("%d",&n);
	system("cls");
	printf("Enter the element in shorted manner\n");
	printf("Ex - 1,2,3,4,5,6\n\n");
	for(i=0;i<=n-1;i++)
	{
		printf("Enter an element of item[%d]\t:",i);
		scanf("%d",&item[i]);
	}
	
	printf("\nEnter the target which u want to find\t:");
	scanf("%d",&target);
	pos=binary_search(item,target,n);
	if(pos==-1)
	{
		printf("\n %d is not found",target,pos);           
	}
	else 
	{
		printf("\n%d found at item[%d] Position",target,pos);
	}
	getch();
	return 0;
}
