#include<stdio.h>

int main(){

    int current_num,factors,given_num;
    printf("Enter max range: ");
    scanf("%d", &given_num);

    for(current_num = 1; current_num<=given_num; current_num++){
      factors = 0;

      // Prime Check
      for(int i=2; i<=current_num/2;i++){
        if(current_num%i==0){
          factors++;
          break;
          }
      }

      // If factors = 0 then prime else not
      if(factors==0 && current_num!= 1){
        printf("%d ",current_num);
      }
    }
  
   return 0;
}
