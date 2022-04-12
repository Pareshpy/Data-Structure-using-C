//linear search using Function
#include<stdio.h>
#include<conio.h>
int linear_search(int*item,int target,int n)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(item[i]==target)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int item[30];
	int i,n,target,pos;
	printf("Enter the number of item that you want to input\t:");
	scanf("%d",&n);
	
	for(i=0;i<=n-1;i++)
	{
		printf("Enter the value for item[%d]",i);
		scanf("%d",&item[i]);
	}
	
	printf("\nWhich number do you want to search\t:");
	scanf("%d",&target);
	pos=linear_search(item,target,n);
	
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
