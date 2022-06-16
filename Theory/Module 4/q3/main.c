// Illustrate the use of struct by creating a structure for student record with Regno, Name, Dept, Date of birth for N students. The member date of birth should be a Union data type with Day, month and year as attributes. Access the student record and print those
// who are born after 1st January 2007. [ make use of Union within Structure concept ]

// #include <stdio.h>

// struct student {
//   int regno;
//   char name[100];
//   char dept[100];

//   union dob {
//     int day;
//     char month[20];
//     int year;
//   }k;
// };

// int main(){

//   int n;

//   printf("Enter the number of students: ");
//   scanf("%d",&n);

//   struct student s[n];

//   for(int i = 0; i < 3; i++){
//     scanf("%d", &s[i].regno);
//     scanf("%s", &s[i].name);
//     scanf("%s", &s[i].dept);
//     scanf("%d", &k.day);
//     scanf("%s", &k.month);
//     scanf("%d", &k.year);
//   }
  
//   for(int i = 0; i < 3; i++){
//     printf("%d", s[i].regno);
//     printf("%s", s[i].name);
//     printf("%s", s[i].dept);
//     printf("%d", k.day);
//     printf("%s", k.month);
//     printf("%d", k.year);
//   }

//   for(int i = 0; i < 3; i++){
//     if(k[i].year>2006)
//   }
// }