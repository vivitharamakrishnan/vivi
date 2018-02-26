#include<stdio.h>
int main()
{
int rem=0,rs=1,n;
printf("enter the num\n");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rs=rs*rem;
n=n/10;
}
printf("%d",rs);
return 0;
}
