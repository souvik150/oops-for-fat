// Write a program to create a structure to store any 5 product details ( product id, product name, place, cost per item ) and print only the products whose cost is greater than
// Rs.250

#include <stdio.h>

struct product {
  int product_id;
  char product_name[20];
  char place[20];
  float cost;
};

int main(){
  struct product p[2];

  for(int i=0; i<2; i++){
    scanf("%d", &p[i].product_id);
    scanf("%s", &p[i].product_name);
    scanf("%s", &p[i].place);
    scanf("%f", &p[i].cost);
  }

  for(int i=0; i<2; i++){
    if(p[i].cost>250.0){
      printf("Product details are:");
      printf("%d\n", p[i].product_id);
      printf("%s\n", p[i].product_name);
      printf("%s\n", p[i].place);
      printf("%.2f\n", p[i].cost);
    }
  }

}