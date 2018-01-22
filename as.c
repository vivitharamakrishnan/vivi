#include<stdio.h>
 int main()
{
int a[100],i,j,n=3,m=3,temp;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
for(j=0;j<m;j++)
{
scanf("%d",&a[j]);
}
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("%d",a[i]);
return 0;
}
