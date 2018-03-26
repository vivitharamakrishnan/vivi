#include<stdio.h>
int main()
{
int a,b,i;
printf("enter range");
scanf("%d%d",&a,&b);
for(i=a+1;i<=b;i++)
{
if(i%(a&&b)==0 && (i%2!=0))
{
printf("%d",i);
}
}
return 0;
}
