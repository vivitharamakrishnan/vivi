#include<stdio.h>
int main()
{
int a=4,b=0,a1;
while(a!=0)
{
a1=a%10;
b+=a1;
a/=10;
}
printf("%d",b);
return 0;
}
