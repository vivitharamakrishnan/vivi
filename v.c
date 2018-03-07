#include<stdio.h>
int main()
{
int n,k,a[4],c=0;
printf("enter the n and k values\n");
scanf("%d%d",&n,&k);
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
c++;
}}
if(c==k)
{
printf("%d",a[i]);
}
return 0;
}
