#include <stdio.h>

int main() {
    int num,sum =0;
    printf("enter the num");
    scanf("%d",&num);
    while(num!=0)
    {
        //to extract last sum
        sum=sum+num%10;
        num=num/10;
    }
printf("\n%d",sum);
    return 0;
}
O/P
  enter the num1234

10
