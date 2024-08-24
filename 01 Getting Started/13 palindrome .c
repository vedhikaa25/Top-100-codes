#include <stdio.h>

void main() {
    int num, reverse=0;
    printf("enter a num:");
    scanf("%d",&num);
    int temp = num;
    while(num!=0){ 
        reverse=reverse*10+num%10;
        num=num/10;
    } 

 if(temp==reverse){
     printf("number is palindrome",num);
 }
 else{
     printf("number is not palindrome",num);
  }
} 
O/P 
  enter a num:12321
number is palindrome

enter a num:123
number is not palindrome
