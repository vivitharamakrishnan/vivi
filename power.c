#include<stdio.h>
#include<conio.h>
void main()
{
int base,exponent;
long long result=1;
clrscr();
printf("enter the base and exponent value");
scanf("%d",&base,&exponent);
while(exponent!=0)
{
result result*=base;
--exponent;
}
printf("answer=%d",result);
getch();
}
