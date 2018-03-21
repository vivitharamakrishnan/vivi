#include<stdio.h>
#include<string.h>
int main()
{
char rom[8];
int t=0,a,b,i;
scnaf("%s",rom);
b=strlen(rom);
for(i=0;i<b;i++)
{
switch(rom[i])
{
case 'I':rom[i]=1;
break;
case 'II':rom[i]=2;
break;
case 'III:rom[i]=3;
break;
}}
for(i=0;i<b;i+2)
{
if(rom[i]<rom[i+1])
{
a=rom[i+1]-rom[i];
}
else
{
a=rom[i+1]+rom[i];
}
t=a+t;
}
printf("%d",t);
return 0;
}
