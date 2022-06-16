// Write a program to create a structure for customers in a bank with ( Account No, Name,
// Balance Amount). Assume that there are N customers Write a function toprint only
// those customers whose name starts with 'A' and have balance greater than 10000.

#include<stdio.h>
struct customers{
    int acc_no;
    char name[30];
    int bal_amt;
};
int main(){
    struct customers c[450];
    int i,n,j;
    printf("enter number of customers");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("account number:-");
        scanf("%d",&c[i].acc_no);
        printf("name:-");
        scanf("%s",&c[i].name);
        printf("balance amount:-");
        scanf("%d",&c[i].bal_amt);
        
    }
    if(c[i].bal_amt>10000){
        printf("%d\n",c[i].acc_no);
        printf("%s\n",c[i].name);
        printf("%d\n",c[i].bal_amt);
    }
    if(c[i].name[0]=='a'){
        printf("%d\n",c[i].acc_no);
        printf("%s\n",c[i].name);
        printf("%d\n",c[i].bal_amt);
    }
  
  return 0;
}