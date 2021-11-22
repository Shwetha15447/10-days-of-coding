#include<stdio.h>
void main()
{
int i,j,n;
printf(" Enter the n value\n");
scanf("%d", &n);
int start=0;
int end=n;
for(i=0;i<=n;i++)
{
	for(j=0;j<=n;j++)
	{
		if(i==start||i==end||j==start||j==end)
		{
			printf("%d\t",n);
		}
		else if(i==start+1||i==end-1||j==start+1||j==end-1)
		{
			printf("%d\t",n-1);
			}
		else if(i==start+2||i==end-2||j==start+2||j==end-2)
		{
			printf("%d\t",n-2);

		}
		}
		printf("\n");
}

}
