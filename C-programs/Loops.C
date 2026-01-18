#include<stdio.h>
int main()
{
int i,n,sum=0;
i=1;
while(i<=6)
{
printf("enter num%d:",i);
scanf("%d",&n);
sum=sum+n;
}
printf("Sum=%d\n",sum);
return 0;
}
