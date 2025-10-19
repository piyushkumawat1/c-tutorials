// // #include<stdio.h>
// // #define pi 3.14 
// // int main(){         // make a code for calculate the area of circle 
// //     int radius ;
// //     printf("Enter the radius  : ");
// //     scanf("%d", &radius);
// //     float area = pi*radius*radius;

// // printf("%f\n",area);


// // return 0;
// // }

// // #include<stdio.h>
// // int main (){
// //     int n;
// //     printf("enter the number :");
// //     scanf("%d", &n);
// //     if(n%2==0){
// //         printf("Divisible by 2\n");
// //     }
// //     else{
// //         printf("Not divisible \n");

// //     }
// //     return 0;
// // }
// // #include<stdio.h>
// // int main(){
// //     int num,original,rem,sum = 0;
// //     printf("enter the number : ");
// //     scanf("%d",&num);
// //     original = num;

// //     while(num>0){ 
// //         rem = num%10 ;          //gets last digit
// //         sum  = sum + (rem*rem*rem);  //cube and add
// //         num = num/10;
        
// //     }


// //     if(sum == original){
// //         printf("%d is armstrong number\n",original);
// //     }
// //     else {
// //         printf("%d is not armstrong number\n",original);
// //     }

    
// //     return 0;
// // }

// // #include<stdio.h>
// //  int main(){
// //     int n;
// //     printf("enter the number = ");
// //     scanf("%d",&n);

// //     if(n>0)
// //         printf("%d is natural number",n);
    
// //     else
// //         printf("%d is not natural number",n);

// //     return 0;
// //  }
// #include<stdio.h>

// //    int main(){
// //     int n;
// //     printf("Enter the number :");
// //     scanf("%d",&n);
// //     if(n>=0 && n<=100){
// //         if(n%2==0){
// //             printf("%d is  prime number ", n);
// //         }
// //         else
// //             printf("%d is not prime number ",n);

// //     }
// //     else if (n>100){
// //         if(n%2 == 0){
// //         printf("%d is  prime number ",n);
// //         }
// //         else 
// //             printf("%d is not prime number ",n);


// //     }

// //     return 0;
// // }
// #include<stdio.h>
// int main(){
//     int days;
//     printf("Enter the day(1-7) :");
//     scanf("%d",&days);
//     switch(days){
//         case 1 : printf("Monday");
//                  break;
//         case 2 : printf("Tuesday");
//                  break;
//         case 3:  printf("Wednesday");
//                  break;
//         case 4:  printf("Thursday");
//                  break;
//         case 5:  printf("friday");
//                  break;
//         case 6:  printf("saturday");
//                  break;
//         case 7:  printf("sunday");
//                  break;  
//         default :printf("DATA ERROR");
//                  break;                                                                 
//     }

//     return 0;
// }
#include<stdio.h>
// make  a code to check given input by user is upper or lower
int main(){
    int i ;
    printf("Enter the number :");
    scanf("%d",&i);
    
    int sum = 0;
    while(i>=0){
        printf("%d\n",i);
        sum = sum +i;
        i--;

    }
    printf("sum of numbers : %d",sum);
    return 0;

}