#include<stdio.h>
#include<math.h>
float powerN(int n,int num);
int main(){
   int n,num;
   printf("Enter the number and power of number  : ");
   scanf("%d %d",&n,&num);
   printf("%d power of %d is %.0f \n",n,n,powerN(n,num));
   return 0;
}
float powerN(int n,int num){
   
   float power = pow(n,num);
   return power;
}



