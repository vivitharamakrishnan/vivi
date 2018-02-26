#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the values\n");
scanf("%d%d%d\n",&a,&b,&c);
d=a*b%c;
printf("%d",d);
return 0;
}
