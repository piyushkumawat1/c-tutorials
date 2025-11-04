#include<stdio.h>
int main(){
    int power,num,powerN;
    printf("enter the number & power : ");
    scanf("%d %d",&num,&power);
    printf("%d of the %d = %d",power,num,powerN)
    return 0;
}
int powerN(n,num){ 
    powerN = pow(n,num);
    return powerN ;


    
} 