//Binary search using recursive function
#include<stdio.h>
#include<conio.h>
int binary_search_rec(int*item,int lb,int ub,int target)
{
	int mid;
	if((lb>ub))
		return -1;
	else
	{
		mid=(lb+ub)/2;
		if(target==item[mid])
			return mid;
		else if(target<item[mid])
			return binary_search_rec(item,lb,mid-1,target);
		else
			return binary_search_rec(item,mid+1,ub,target);
	}
}
int main()
{
	int item[30],i,target,n,pos;
	int lb,ub;
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
	lb=0;
	ub=n-1;
	printf("\nEnter the target which u want to find\t:");
	scanf("%d",&target);
	pos=binary_search_rec(item,lb,ub,target);
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
