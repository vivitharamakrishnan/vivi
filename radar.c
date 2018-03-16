#include<stdio.h>
int main()
{
char a[10];
int l,i;
printf("enter the string\n");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
a[i]=a[i]+3;
if(a[i]=='X')
a[i]='A';
if(a[i]=='Y')
a[i]='B';
if(a[i]=='Z')
a[i]='C';
}
printf("%s",a);
return 0;
}
