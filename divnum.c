#include<stdio.h>
int main()
{
int a,b,i,g;
printf("enter two numbers");
scanf("%d%d",&a,&b);
if(a>b)
{
g=a;
}
else
{
g=b;
}
for(i=2;i<g;i++)
{
if((a%i==0)&&(b%i==0))
{
printf("%d",i);
}
}
return 0;
}
