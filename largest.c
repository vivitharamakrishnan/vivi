#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is largest no");
}
else if(b>c);
{
printf("b is greater");
}
else
{
printf("c is greater");
}
getch();
}
