#include<stdio.h>
int main()
{
int N,K,a[4],i;
printf("enter N value\n");
scanf("%d",&N);
printf("enter K value\n");
scanf("%d",&K);
printf("enter n elements\n");
for(i=0;a[i]!='\0';i++)
{
scanf("%d",&a[i]);
if(a[i]==K)
{
printf("%d",K);
}
}
return 0;
}
