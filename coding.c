#include<stdio.h>
void main()
{
    int n,a[10],i;
    float neg_count=0,pos_count=0,zero_count=0;
   float m,p,o;
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
         neg_count++;
        }
        else if(a[i]>0)
        {
            pos_count++;
        }
        else
        {
            zero_count++;
        }

    }
    m=neg_count/n;
    p=pos_count/n;
    o=zero_count/n;

    printf("%.6f\n",m);
    printf("%.6f\n",p);
    printf("%.6f\n",o);

}



