#include<stdio.h>
int main()
{
char a[50]="12345";
int i,l;
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]%2!=0)
{
printf("%c",a[i]);
}
}
return 0;
}
