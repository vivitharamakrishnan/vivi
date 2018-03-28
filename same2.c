#include<stdio.h>
int main()
{
char a[10],b[10],c[10];
printf("enter two strings");
scanf("%s%s",a,b);
printf("%s%s",a,b);
printf("enter third string\n");
scanf("%s",c[10]);
if((c[10]==b[10])||(c[10]==a[10]))
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
