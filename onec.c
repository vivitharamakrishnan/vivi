#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int cn=0,i,c,d;
printf("enter two strings\n");
scanf("%s%s",a,b);
c=strlen(a);
d=strlen(b);
if(c==d)
{
for(i=0;i<c;i++)
{
if(a[i]!=b[i])
{
cn=cn+1;
}
}
if(cn==1)
{
printf("yes\n");
}
else
{
printf("no");
}
}
return 0;
}
