link-[https://prepinsta.com/c-program/factorial-of-a-number-in-c/]
#include<stdio.h>
int main() 
{
    int n,fact=1,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    
}
O/P
  enter the number:5
  120
