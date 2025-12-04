#include<stdio.h>
int main (){               //we are gonna make a calculator for two digitals digit can be (int, float)
    char operator;
    printf("enter the operator('+','-','*','/') : ");
    scanf("%c", &operator);

    float num1 , num2 ,result;
    printf("Enter the two numbers :");
    scanf("%f %f", &num1,&num2);

    switch(operator){

        case'+':
               result = num1 + num2 ;
               break;
        case'-':       
   
              result = num1 - num2 ;
              break;

        case'*':
              result = num1*num2;
              break;
        case '/':
                if(num2 != 0){
              result = num1/num2;
            }   else{
                printf("invalid operation\n");
                }
              break;
        case'%':
              result = (int)num1 % (int)num2;
              break;   
        default:
              printf("Invalid! operator :\n");

            }        
    printf("%.2f %c %.2f = %.2f",num1,operator, num2,result);

            

    return 0;
    }
    
    

