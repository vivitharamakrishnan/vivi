#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter the year");
scanf("%d",&year);
if(year%4==0)
{
printf("it is a leep year");
}
else
{
printf("it is not a leep year");
}
getch();
}
