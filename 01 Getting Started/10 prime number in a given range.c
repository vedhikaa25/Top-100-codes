#include <stdio.h>

void main() {
    int min,max;
    printf("enter value of min");
    scanf("%d",&min);
    printf("enter value of max");
    scanf("%d",&max);
 for(int i=min;i<=max;i++){
     int count = 0; 
       for(int j=1;j<=i;j++){
          if(i%j==0){
              count++;
          }
      }   
        if(count==2){
     printf("\n %d",i);
    }
  }  
}
