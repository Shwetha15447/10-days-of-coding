#include<stdio.h>
void main()
{
    int num,n,temp,count;
    printf("Enter the number\n");
    scanf("%d",&num);
    printf("Enter the Digit\n");
    scanf("%d",&n);
    while(num>0)
    {
     temp=num;
     num=num%10;
     if(num==n)
    {
     count++;
    }
    num=temp/10;
    }
    printf("Digit frequency of the given Digit is %d",count);
}
