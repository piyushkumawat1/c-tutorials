#include<stdio.h>
int main(){
    int marks ;
    printf("enter a number(1-100) :");
    scanf("%d", &marks);
    if (marks<=30){
        printf("FAIl\n");
    }else if(marks>30 && marks<=70){
        printf("PASS\n");
        printf("grade: C\n");

    }else if(marks>70 && marks<=90){
        printf("good\n");
        printf("grade: A\n");
    }else if(marks>90 && marks<=100){
        printf(" very good\n");
        printf("A+\n");

    }else{
        printf("wrong marks\n");
    }
    return 0;
}