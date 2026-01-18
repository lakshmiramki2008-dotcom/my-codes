#include<stdio.h>
#include<conio.h>
void main()
{
static int num=5;
clrscr();
printf("Value of num:%d\n",num);
num=num+1;
printf("1st Modified Value of num:%d\n",num);
num++;
printf("2nd Modified Value of num:%d\n",num);
num++;
printf("3rd Modified Value of num:%d\n",num);
num++;
getch();
}