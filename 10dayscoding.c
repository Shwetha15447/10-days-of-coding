#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[30][30],n,m,j,i,sum1=0,sum2=0;
    printf("enter the number of row and column\n");
    scanf("%d%d",&m,&n);
    printf("enter a array elements\n");
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
            scanf("%d",&a[i][j]);
            printf("%d\t",a[i][j]);
            if(i==j)
            {
                sum1=sum1+a[i][j];
            }
         }
         printf("\n");
     }
     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             if(i==n-j-1)
             {
                 sum2=sum2+a[i][j];
             }
         }
     }

     printf("%d\n",sum1);
     printf("%d\n",sum2);

     printf("%d\n",sum2-sum1);



}


