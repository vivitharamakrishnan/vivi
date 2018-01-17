#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",n)
for(i=2; i<=n/2; ++i)
    {
      if(n%i==0)
        {
            f=1;
            
        }
    }

    if (f==0)
        printf("it is a prime number.",n);
    else
        printf("it  is not a prime number.",n);
    getch();
    }
