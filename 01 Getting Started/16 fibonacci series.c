#include<stdio.h>
int main() 
{
    int n,i,a=0,b=1,c;
    printf("Enter the limit: ");
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("%d\n",a);
    c=a+b;
    a=b;
    b=c;
}
return 0;
}
O/P
Enter the limit: 10
0
1
1
2
3
5
8
13
21
34
