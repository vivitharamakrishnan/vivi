#include<stdio.h>
int main()
{
char a[10],b[10],c[10];
printf("enter the strings\n");
scanf("%s%s%s",a,b,c);
if((a[0]==b[0]==c[0])||(a[1]==b[1]==c[1]))
{
printf("%s%s%s",a,b,c);
}
else if((a[0]==a[1])&&(b[0]==b[1])&&(c[0]==c[1]))
{
printf("%s%s%s",a,b,c);
}
else
{
printf("no");
}
return 0;
}
