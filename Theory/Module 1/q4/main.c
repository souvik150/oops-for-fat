#include<stdio.h> 
#include<string.h> 
 
int main() 
{ 
    int i,j,k; 
    int n,m; 
 
    char str[100]; 
    scanf("%s",&str); 
 
    i=0, j=strlen(str)-1; 
    while(i<j) 
    {
        if(str[i]!=str[j]){ 
            printf("not palindrome\n"); 
            return 0; 
        } 
 
        i++;
        j--; 
    } 
 
    printf("palindrome\n"); 
 
    return 0; 
} 