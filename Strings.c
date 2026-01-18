#include<stdio.h>
#include<string.h>
int main()
{

    char str[100],dest[100];
    scanf("%s",&str);
    strcpy(dest,str);
    printf("Copied string: %s",dest);
    return 0;
}
