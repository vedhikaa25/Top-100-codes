Link-[https://youtu.be/O9xssz3T0KY?si=YpiZqSRivPQMpAkm]
#include<stdio.h>
#include<math.h>

void main() 
{
    int num,temp,sum=0,digit=0;
    printf("Enter the number: ");
    scanf("%d",&num);
 //to find the digit count
    temp=num;   
    while(temp>0)
    {
      temp=temp/10;
      digit++;
      
    }
  
    temp=num;  // Take this again because in the above case it becomes 0
    while(temp>0)
    {
      sum=sum+pow(temp%10,digit);
      temp=temp/10;
    }
  if(sum==num)
  {
     printf("Armstrong number");
  }  
  else
  {
     printf("Not an Armstrongnumber");
  }
}
