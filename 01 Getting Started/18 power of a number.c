link-[https://www.youtube.com/watch?v=t_OelSmM_HA]
#include <stdio.h>
int main()
{
  int base,exp,result=1;
  printf("enter base:");
  scanf("%d",&base);
   printf("enter exponent:");
  scanf("%d",&exp);
  while(exp>0)
{
   result=result*base; 
   exp--;
}
printf("%d",result);
    return 0;
}
