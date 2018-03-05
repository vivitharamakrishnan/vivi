#include<stdio.h>
int main()
{
int n,c;
printf("enter num");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("%d",c);
return 0;
}
