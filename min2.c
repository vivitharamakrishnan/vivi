#include<stdio.h>
int main()
{
int a[10],i,min;
printf("enter numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<9;i++)
{
if(a[i]<min)
{
a[i]=min;
}}
printf("%d",min);
return 0;
}
