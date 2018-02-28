#include<stdio.h>
int main()
{
char a[10]="5guvi12";
int i,l;
l=strlen(a);
for(i=1;a[i]!='\0';i++)
{
if(a[i]>='1'&&a[i]<='9')
{
printf("%c",a[i]);
}
}
return 0;
}
