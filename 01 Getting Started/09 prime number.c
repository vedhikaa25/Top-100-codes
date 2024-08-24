#include <stdio.h>

int main() {
    int num,i,count=0;
   printf("enter a num:");
   scanf("%d",&num);
 for(i=1;i<=num;i++)
   { 
       if(num%i==0)
       {
           count++;
       } 
   }  
if(count>2) {
    printf(" not a prime number");
}       
else {
    printf("prime number");
} 
    
    return 0;
}
