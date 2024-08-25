#include <stdio.h>
int main()
{
  int n,i;
   printf("Enter the number:");
   scanf("%d",&n);
   printf("factors:");
for(i=1;i<=n;i++)
 {
     if(n%i==0)
     {
     printf("%d,",i);
     }
}
    return 0;
}
O/P
  Enter the number:200
factors:1,2,4,5,8,10,20,25,40,50,100,200,
