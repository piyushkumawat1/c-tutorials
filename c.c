#include<stdio.h>
int main(){
    int mark;
    printf(" entetr mark (0-100)");
    scanf("%d", &mark);

    if(mark<30){
        printf("fail\n");
    }

     else if(mark>=30 && mark<70){
        printf("C\n");

    }else if(mark>=70 &&mark<90){
        printf("A\n");
    } else if(mark>=90 && mark<=100){
        printf("A+\n");
    }else{
        printf(" wrong mark\n");
    }

return 0;



}



