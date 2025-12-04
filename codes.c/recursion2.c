#include<stdio.h>
 
int fact(int n);

int main (){
    int n; 
    printf("Enter the number : ");
    scanf(" %d", &n);
    printf(" factorial is %d\n", fact(n));
    

    return 0;
}


int fact ( int n){
    if( n==0){
        return 1;
    }
    int factNm1 = fact(n-1);// factorial 1 to n-1
    int factNum = factNm1 * n ;
     return factNum;
}