#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int n,i,j,f=0;
printf("enter the string\n");
scanf("%s",a);
printf("enter the string2\n");
scanf("%s",b);
printf("enter the num\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(a[i]==a[i+1])
{
	if(b[j]==b[j+1])
	{
		f=1;
	}}
	if(f==1)
	{
printf("no\n");
}
else
{
printf("yes\n");
}
}
return 0;
}
