#include<stdio.h>
#include<stdlib.h>

struct Employee{
   char name[20];
   float salary;
   int hour;
};

int main()
{
   struct Employee emp[10];
   FILE *fptr;
   int i, j;
  
   printf("Enter 10 Employees Details::");

   for (i=0; i<10; i++)
   {
       printf("\nEnter %d. Emp Name : ", j);
       scanf("%s",emp[i].name);
       printf("Enter %d. Emp Salary : ", j);
       scanf("%f",&emp[i].salary);
       printf("Enter %d. Emp Hours Worked : ", j);
       scanf("%d",&emp[i].hour);
      
       if (emp[i].hour == 8)
       emp[i].salary = emp[i].salary + 55;
      
       if (emp[i].hour == 10)
       emp[i].salary = emp[i].salary + 110;
      
       if (emp[i].hour >= 12)
       emp[i].salary = emp[i].salary + 140;
      
       j++;
   }
  
   fptr = fopen("C:\\employee.txt","w");
   if (fptr == NULL)
   printf("File does not exist!!!");
  
   printf("\n::Employee Details::");
   fprintf(fptr,"::Employee Details::");
  
   for (i=0; i<10; i++)
   {
       printf("\nEmployee%d==> %s %.2f %d", j, emp[i].name, emp[i].salary, emp[i].hour);
       fprintf(fptr,"\nEmployee%d==> %s %.2f %d", j, emp[i].name, emp[i].salary, emp[i].hour);
       j++;
   }
  
   fclose(fptr);
   return 0;
}