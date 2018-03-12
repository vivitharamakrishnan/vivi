#include<stdio.h>
#include<string.h>
int main()
{
char str[100],str1[50];
int i,j,a,b,count=0;
printf("enter two strings\n");
scanf("%s%s",str,str1);
a=strlen(str);
b=strlen(str1);
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
if(str[i]!=str1[j])
{
count=count+1;
}
}
}
if(count==1)
{
printf("yes\n");
}
else
{
printf("no");
}
return 0;
}
