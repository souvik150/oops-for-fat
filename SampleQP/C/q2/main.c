#include <stdio.h>
#include <conio.h>


int main()
{
  int no, first,second, third, fourth, Increased_no;
  printf("Type any 4-digit no. : \n");
  scanf("%d",&no);

  first = no/1000;
  no = no%1000;
  second = no/100;
  no = no%100;
  third = no/10;
  fourth = no%10;

  Increased_no = (first+2)*1000+(second+2)*100+(third+2)*10+(fourth+2);
  printf("Increased No. is %d",Increased_no);

  return 0;
}