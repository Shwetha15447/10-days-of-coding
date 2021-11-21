#include<stdio.h>
int main()
{
	int a[10],i,key,n;
	printf("enter a number of array elements\n");
	scanf("%d",&n);
	printf("Enter a array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("the element present in index %d and in position %d",i,i+1);
		}
	}



 return 0;
}
