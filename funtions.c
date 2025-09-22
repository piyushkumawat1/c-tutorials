#include<stdio.h>

// funtion declaration

void calculateprice (float value);

int main (){
   
   float value = 100.0;
   calculateprice( value);
   printf(" value  is : %f\n", value );
   

   return 0;
}

// function defination


void calculateprice (float value  ){
    value = value + (value*0.8);
    printf("final  value is %f\n", value );
    
 } 
