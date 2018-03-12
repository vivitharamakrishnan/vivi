#include<stdio.h>
int main()
{
int fact,i,n;
printf("enter the value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fact=fact*i;
}
printf("%d",fact);
return 0;
}
