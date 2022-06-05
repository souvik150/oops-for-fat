#include <stdio.h>
#include <conio.h>

int main(){

  int i=0;
  char c1[20] = "This is umbrella";

  int rese=0;
  int resis=0;

  while(c1[i] != '\0'){
    if(c1[i]=='e'){
      rese=1;
    }
    i++;
  }
  
  i=0;
  while(c1[i] != '\0'){
    if(c1[i]=='i'){
      if(c1[++i]=='s'){
        resis=1;
      }
    }
    i++;
  }

  printf("%d\n", rese);
  printf("%d", resis);


  return 0;
}