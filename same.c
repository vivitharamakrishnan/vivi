#include<stdio.h>
int main()
{
int i,n,k,a[5];
printf("enter n and k value");
scanf("%d%d",&n,&k);
printf("enter elements");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
if(a[i]==k)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
