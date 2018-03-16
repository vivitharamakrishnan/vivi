#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int i;
printf("enter the string\n");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(i==0)
{
a[i]=toupper(a[i]);
}
if(a[i]==' ')
{
a[i]=toupper(a[i+1]);
}
}
printf("%s",a);
return 0;
}
