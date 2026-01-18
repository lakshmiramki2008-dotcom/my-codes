#include<stdio.h>
#include<conio.h>
int globalVar=10;
void main()
{
extern globalVar;
printf("Value of Global Variable:%d\n",globalVar);
getch();
}
