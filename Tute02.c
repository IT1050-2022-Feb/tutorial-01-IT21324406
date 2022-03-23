#include <stdio.h>

int main() {
  
  int distance,amount;

  printf("Input the distance:");
  scanf("%d", &distance);

  if(distance<=30)
  {
    amount=distance*50;
    printf("Amount is %d\n", amount);
  }
   if(distance>30)
  {
    amount=30*50+(distance-30)*40;
    printf("Amount is %d\n",amount);
  }
  return 0;
}
