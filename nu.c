#include<stdio.h>
int main()
{
char str[10];
int i,j,flag=0;
printf("enter the string\n");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0' && str[i]<='9')
{
flag=0;
}
else
{
flag=1;
}
}
if(flag==1)
{
printf("no");
}
else
{
printf("yes");
}
return 0;
}

