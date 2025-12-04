#include<stdio.h>
int main (){
    int year ;
    printf("enter the year : ");
    scanf("%d",&year);

    if((year%400 ==0 && year%100==0)||(year%4 ==0 && year%100 !=100) ){
        printf("%d is leap year \n", year );
    }
    else {
        printf("%d is not leap year \n",year);
    }
    return 0;
}