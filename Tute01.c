#include <stdio.h>

int main() {

  int mark1, mark2;
  float avg;

  printf("Input the mark1:");
  scanf("%d",&mark1);

  printf("Input the mark2:");
  scanf("%d",&mark2);
  
   avg= (mark1+mark2)/2.0;
  
 printf("Average is %.2f\n",avg);
  
  return 0;
}

