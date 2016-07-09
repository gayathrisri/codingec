#include<stdio.h>
int main()
{
int n,temp,sum=0;
printf("enter a number");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rem=rem%10;
sum=sum+rem*rem*rem;
temp=temp/10;
}
if(n==sum)
printf("%d is a armstring number",sum);
else
printf("%d is not an armstrong number",sum);
return 0;
}
