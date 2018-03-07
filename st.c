#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int i,len;
gets(str);
len=strlen(str);
for(i=0;i<1;i++)
{
if(i==0)
{
str[i]=toupper(str[i]);
printf("%c",str[i]);
}
else
{
printf("%c",str[i]);
}
return 0;
}
