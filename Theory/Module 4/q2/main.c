// A record contains the name of the cricketer, number of test matches played, average runs scored each test match. create an array of structures for N cricketers and write functions to read the details and print those players whose average is greater than the
// average scores of all the players [ Make use of pointer to structures ]

#include <stdio.h>

struct cricket {
  char name[15];
  int no_of_games;
  float avg_runs;
};

void getDetail(struct cricket *, int); 
void displayDetail(struct cricket *, float, int); 

int main(void) {

  int n;
  printf("Enter num of players: ");
  scanf("%d",&n);

  struct cricket c[n];

  getDetail(c,n);

  int i;
  float avg=0;

  for(i=0; i<n; i++){
    avg=avg+(c[i].avg_runs);
  }

  avg=avg/n;
  displayDetail(c,avg,n);

  return 0;
}

void getDetail(struct cricket *ptr,int n) {
  int i;
  
  for (i = 0; i < n; i++) {
    printf("Enter detail of cricket player %d\n", (i + 1));
    
    printf("Enter Name: ");
    scanf("%s", &ptr->name);

    printf("Enter no of games: ");
    scanf("%d", &ptr->no_of_games);
    
    printf("Enter avg runs: ");
    scanf("%f", &ptr->avg_runs);

    ptr++;
  }
}

void displayDetail(struct cricket *ptr, float avg,int n) {
  int i;

  for (i = 0; i < n; i++) {
    if((ptr->avg_runs)>avg)
    {
      printf("\nDetail of cricket player %d\n", (i + 1));
      printf("\nResult via ptr\n");
      printf("Name: %s\n", ptr->name);
      printf("No.Of Games: %d\n", ptr->no_of_games);
      printf("Average runs: %f\n", ptr->avg_runs);
    }
  
    ptr++;
  }
}