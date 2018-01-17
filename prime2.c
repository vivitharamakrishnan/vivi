#include<stdio.h>
int main()
{
int n,i,f;
printf("enter the number");
scanf("%d",&n);
for(i=2; i<=n/2; ++i)
    {
      if(n%i==0)
        {
            f=1;
            break;
        }
    }

    if (f==0)
        printf("\n it is a prime number");
    else
        printf("\n it  is not a prime number");
    return 0;
    
    }
