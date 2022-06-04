#include <stdio.h>
#include <conio.h>

int main(){
  int c1;
  printf("Please enter a 4 digit number");
  printf("\n");
  scanf("%d", &c1);
   
  int c2 = c1/10000;
  int c3 = (c1%100)/10;
 
  printf("%d", c2+c3);
 
  return 0;
}