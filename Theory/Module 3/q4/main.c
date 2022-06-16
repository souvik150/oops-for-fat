// Write a program to create a structure for Time with ( Hour, Minute and Second ) as members. Make use of the definition time to declare the variables t1 and t2. If the hour of t1 is greater than t2 hour then subtract t2 from t1 otherwise subtract t1 from t2.
// finally display the computed time.

#include <stdio.h>

struct time{
  int hour;
  int minute;
  int second;
};

int main(){
  struct time t1, t2, t3;

  scanf("%d",&t1.hour);
  scanf("%d",&t1.minute);
  scanf("%d",&t1.second);
  
  scanf("%d",&t2.hour);
  scanf("%d",&t2.minute);
  scanf("%d",&t2.second);

  if(t1.hour>t2.hour){
    t3.hour=t1.hour-t2.hour;
  } else {
    t3.hour=t2.hour-t1.hour;
  }

  printf("%d", t3.hour);

  return 0;
}
