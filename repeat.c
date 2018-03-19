#include<stdio.h>
#include<string.h>
int main()
{
char s[10],cr;
int c=0,l,i,j,max=1;
printf("enter the string\n");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=j+1;j<l;j++)
if(s[i]==s[j])
{
c++;
if(c>max)
{
max=c;
cr=s[i];
}}}
printf("%c",s[i]);
return 0;
}
