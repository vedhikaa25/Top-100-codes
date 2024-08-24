#include<stdio.h>
#include<math.h>
int main() 
{
    int min,max,i,temp,sum,digit;
    printf("Enter minimum: ");
    scanf("%d",&min);
     printf("Enter maximum: ");
    scanf("%d",&max);
for(i=min;i<=max;i++)
{
    sum=0;
    digit=0;
    temp=i;
//to find the digit count
    while(temp>0)
    {
      temp=temp/10;
      digit++;
      
    }
  
    temp=i;  // Take this again because in the above case it becomes 0
    while(temp>0)
    {
      sum=sum+pow(temp%10,digit);
      temp=temp/10;
    }
  if(sum==i)
  {
      printf("\n%d",sum);
  }
}

return 0;
  
}
