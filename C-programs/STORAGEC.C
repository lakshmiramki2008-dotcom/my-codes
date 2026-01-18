1,Storage class
#include<stdio.h>
#include<conio.h>
int latefee=15;
void main()
{
auto int bkid=10;
register int Studentid=20;
static int bkissued=9;
extern int latefee;
clrscr();
printf("Book Id: %d\n",bkid);
printf("Student Id:%d\n",Studentid);
printf("Book Issued:%d\n",bkissued);
printf("Late Fee:%d\n",latefee);
getch();
}

2,Global variable
#include<stdio.h>
#include<conio.h>
int globalVar=10;
void main()
{
extern globalVar;
printf("Value of Global Variable:%d\n",globalVar);
getch();
}
