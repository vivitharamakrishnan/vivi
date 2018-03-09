#include<stdio.h>
int main()
{
int n,rem=0,rv;
printf("enter number\n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rv=rv*10+rem;
n=n/10;
}
printf("%d",rv);
return 0;
}
