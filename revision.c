#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks ");
    scanf("%d", &marks);
    // printf("enter ymarks(1-000):");
    // scanf("%d",&marks);
    // if (marks >=30 && marks<=100){
    //     printf("pass\n");
    // }else if (marks<30){
    //     printf("fail\n");
        
    // }else{
    //     printf("wrong marks\n");
    // }
    marks < 30 ? printf("C\n") :
    marks >= 30 && marks < 70 ? printf("B\n") :
    marks >= 70 && marks < 90 ? printf("A\n") :
    marks >= 90 && marks <= 100 ? printf("A+\n") :
    printf("wrong marks\n");
return 0;
}
