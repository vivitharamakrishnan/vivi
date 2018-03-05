#include<stdio.h>
int main()
{
int n,k,i,a[5],c=0;
printf("enter n and k");
scanf("%d%d",&n,&k);
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if(a[i]==k)
{
c++;
}}
printf("%d",c);
return 0;
}
