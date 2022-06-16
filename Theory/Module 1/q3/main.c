#include<stdio.h>
int main(){
    int rows,cols;
    
    printf("enter number of rows and coloumns");
    scanf("%d %d",&rows,&cols);
    int a[rows][cols];
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    int rows1,cols1;
    
    printf("enter number of rows and coloumns");
    scanf("%d %d",&rows1,&cols1);
    int b[rows1][cols1];
    
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<cols1;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }

    int c[rows][cols1];

    printf("Multiplication of matrix\n");

    for(int i=0; i<rows; i++){
      for(int j=0; j<cols1; j++){
        int sum=0;
        for(int k=0; k<cols; k++){
          sum=sum+a[i][k]*b[k][j];
        }
        c[i][j]=sum;
      }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols1;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}