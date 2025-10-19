#include<stdio.h>
// int factorial(int n);
//     int main(){
//         int n;
//         printf("Enter the number :");
//         scanf("%d",&n);
        
//        printf("factorial is %d\n",factorial(n));
//        return 0;
//     }

//     int factorial(int n){
//         if(n ==1){
//             return 1;
//         }
//         int factorialNm1 = factorial(n-1);  ///sum of 1 to n
//         int factN = factorialNm1*n;
        
//         return factN;

//     }

int calculateper(int s1,int s2,int s3);


int main(){
    int s1,s2,s3;
    printf("Enter the marks of three subjects : ");
    scanf("%d %d %d",&s1,&s2,&s3);
    printf("percentage is %d",calculateper(s1,s2,s3));
    

    return 0;
}
int calculateper(int s1, int s2,int s3){
    float percentage;
    int total,max;
    max = 300;
    total = s1 + s2 + s3; 
    percentage = ((float)total/max)*100;
    
    
    return percentage;
     

    
}