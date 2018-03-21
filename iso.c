#include<stdio.h>
#include<string.h>
int main()
{
char str[10],str1[10];
int i,j,a,b,u,v,w,x,y,z,c=0;
scanf("%S,%S",str,str1);
a=strlen(str);
b=strlen(str1);
if(a==b)
{
for(i=0;i<a;i++)
{
for(j=i;j<a;j++)
{
u=str[i];
v=str[j];
w=str1[i];
x=str1[j];
y=u-v;
z=w-x;
if(y==z)
{
c=1;
}
else
{
c=0;
break;
}}}}
if(c==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
