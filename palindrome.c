#include<stdio.h>
int main()
{
int temp,n,rev=0;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rev=rev*10;
rev=rev+temp%10;
temp=temp/10;
}
if(n==rev)
printf("palindrome");
else
printf("not palindrome");
return 0;
}
