#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int l,i;
printf("enter the string\n");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I'||a[i]=='O'||a[i]=='U')
{
a[i]='+';
}}
for(i=l;i>=0;i--)
	{
		if(a[i]!='+')
		{
			printf("%c",a[i]);
		}
	}
 return 0;
 }
