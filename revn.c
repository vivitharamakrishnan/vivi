#include<stdio.h>
int main()
{
int n=1234,rv=0,rm;
while(n!=0)
{
rm=n%10;
rv=rv*10+rm;
n=n/10;
}
printf("%d",rv);
return 0;
}
