#include<stdio.h>
#include<conio.h>
int main()
{
float marks[40][5];
int i,j;
clrscr();
for(i=0;i<40;i++)
{
for(j=0;j<5;j++)
{
printf("Enter marks of student %d subject %d: ",i+1,j+1);
scanf(" Marks:%f",&marks[i][j]);
}
}

getch();
return 0;
}

