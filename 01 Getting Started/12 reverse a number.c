#include <stdio.h>

int main() {
    int num, reverse=0;
    printf("enter a num:");
    scanf("%d",&num);
    while(num!=0)
    { 
        reverse=reverse*10+num%10;
        num=num/10;
    } 
    printf("\n%d",reverse);

    return 0;
}
O/P
  enter a num:1234

4321
