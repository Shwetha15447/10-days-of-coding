#include<stdio.h>
int main()
{
 char str[10];
 int i=0,len,flag;
 printf("Enter a string\n");
 scanf("%s",str);
 while(str[i]!='\0')
 {
 	len++;
 	i++;
 }
 printf("%d\n",len);
 i=0;
 while(str[i]==str[len-i-1])
 {
 	i++;
 	flag=1;
 }
 if(flag==1)
 {
 	printf("string is palindrome\n");
 }
 else
 {
 	printf("not palindrome");
 }
 return 0;
}
