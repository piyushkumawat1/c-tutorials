// // // // // #include <stdio.h>
// // // // // int main(){
// // // // //     // a is length and b is weadth of rectangle.
// // // // //     int a, b;
// // // // //     printf("Enter the value of a :");
// // // // //     scanf("%d", &a);
// // // // //     printf("Enter the value of b :");
// // // // //     scanf("%d", &b);
// // // // //     int area =  a*b;
// // // // //     int perimeter = 2*(a+b);
// // // // //     printf("perimeter of rectangle : %d\n", perimeter);
// // // // //     printf( " area of recrangle : %d\n" , area );

   
// // // // //     return 0;
	
// // // // // }

// // // // // #include<stdio.h>
// // // // // int main(){
// // // // //     int num1,num2,num3, average;
// // // // //     printf("Enter thee value of num1 :");
// // // // //     scanf("%d", &num1);
// // // // //     printf("Enter thee value of num2 :");
// // // // //     scanf("%d", &num2);
// // // // //     printf("Enter thee value of num3 :");
// // // // //     scanf("%d", &num3);
// // // // //     average = (num1 + num2 + num3)/3;
// // // // //     printf("average of three number = %d\n", average);


// // // // //     return 0;
// // // // // }
// // // // #include<stdio.h>
// // // // int main(){
// // // //     int num1,num2;
// // // //     // input&output 
// // // //     printf("Enter the number 1 :");
// // // //     scanf("%d", &num1);
// // // //     printf("Enter the number 2 :");
// // // //     scanf("%d", &num2);
// // // //     // check the number is greater or not 

// // // //     if (num2>num1){
// // // //         printf("mumber 2 is greater\n");    
// // // //     }
// // // //     else if( num1>num2){
// // // //         printf("num2 is greater \n");
// // // //     }else{
// // // //         printf(" both are equal\n");
// // // //     }

// // // //     return 0;
// // // // }
// // // #include<stdio.h> 
// // // int main (){
// // //     int n ;
// // //     printf("Enter the number : ");
// // //     scanf("%d", &n);
// // //     if(n>=1 ){
// // //         printf(" given number  is natural number\n");

// // //     }
// // //     else if (n>='a' && n<='z'){
// // //         printf(" wrong data ");
// // //         printf( "please enter a valid nnumber ");
// // //     } else{
// // //         printf(" given number is not natural number ");
// // //     }
// // //     return 0;
// // // } 
// // #include<stdio.h>
// // // function decleration 
// // void printtable( int n);




// // int main (){
// //     int n;
// //     printf( " Enter yhe number :");
// //     scanf(" %d", &n);
// //     printtable(n);

// //     return 0;
// // }

// // // function defenation
// //  void printtable (int n){
// //     for ( int i = 1; i<=10; i++){
// //         printf(" %d\n", n*i);
// //     }
// //  }
// #include<stdio.h> 
//  int  squareArea( int side );
//  int rectangleArea( int x, int y  );
//  float circuleArea ( float PI, float radius);

// int main(){
//     int side ;
//     printf(" Enter the side  : ");
//     scanf( " %d", &side );

//     printf( " Area of a square : %d\n", squareArea(side ));

//     return 0;
// } int squareArea (int side ){
//     return side * side ;
// }
// int rectangleArea ( int x, int y){
//     return x*y;
// }
// float circuleArea( float PI, float radius ){
//     return PI* radius*radius;
// }

#include<stdio.h>
 void printHw( int count );

 int main (){
    printHw( 20);

    return 0;
 }

 void printHw( int count ){
    if( count == 0){
        return ;
    }
    printf( "Hello world \n");
    printf( " Work hard \n");
    printHw(count -1);
 
}