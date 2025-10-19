#include<stdio.h>
// void swap (int a, int b);
// void _swap(int *a,int *b);
// int main(){
//     int x = 5,y= 3 ;
//     _swap(&x,&y);
//     printf("x is %d & y is %d", x,y);
   
//     return 0; 
// }

// void swap  (int a ,int b ){
//     int t = a;
//     a = b;
//     b = t;
//     printf(" a is %d & b is %d\n",a,b);
// }
// void _swap(int *a, int *b){
//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf(" a is %d & b is %d\n",*a,*b);
// }
// void dowork(int a , int b, int *sum ,int *product, float *average);
// int main(){
//     int sum ,product;
//     float  average;
//     int a = 3, b= 5;
//     dowork(a,b,&sum,&product,&average);
    
//    printf("sum is %d & product is %d & average is %f\n", sum,product,average); 
//     return 0;
// }
// void dowork(int a , int b, int *sum ,int *product, float *average){
//     *sum = a + b;
//     *product = a*b;
//     *average = (a+b)/2;
// }
// void Greaternum(int *ptr1,int*ptr2);
// int main (){
//     int num1, num2;
//     int *ptr1 = &num1;
//     int *ptr2 = &num2;
//     printf("Enter the first number : ");
//     scanf("%d",&num1);
//     printf("Enter the second  number : ");
//     scanf("%d",&num2);
//     Greaternum(ptr1,ptr2);
//     return 0;

// }
// void Greaternum(int *ptr1,int *ptr2){
//     if(*ptr1>*ptr2)
//            printf("first number %d is greater ", *ptr1);
//     else 
//        printf("second number %d is greater ", *ptr2);       
// }
#include<stdio.h>
// int main(){
//     float final_cost[3];
//     float total_bill;
//     printf("price of item first = ");
//     scanf("%f", &final_cost[0]);
//     printf("price of item second = ");
//     scanf("%f", &final_cost[1]);
//     printf("price of item third = ");
//     scanf("%f", &final_cost[2]);
//     // final cost of items including 18% gst 
//     /* hello guys  i am doing coding*/
//     final_cost[0] = final_cost[0] + final_cost[0]*0.18 ;
//     final_cost[1] = final_cost[1] + final_cost[1]*0.18 ;
//     final_cost[2] = final_cost[2] + final_cost[2]*0.18 ;
//      printf("final cost of first item = %f\n", final_cost[0]);
//      printf("final price of second item = %f\n",final_cost[1]);
//      printf("final cost of third item = %f\n", final_cost[2]);
     
//      total_bill = final_cost[0] + final_cost[1] + final_cost[2];
//      printf(" Total bill = %.0f\n",total_bill);

//      printf("Thank you for visit, visit again!!");
    

//     return 0;

//     int array[5];
//     int *ptr = &array[0];

//     // taking input 
//     for (int i = 0;i<5; i++){
//     printf("%d index : ", i);
//     scanf("%d" , ptr+i );
// }
// for(int i = 0; i<5; i++){
//     printf("%d index = %d\n",i,*(ptr+i) );

// }printf("\n");
// return 0;
// }
// // void printNumbers(int array[], int n);
// // int main(){
// //     int array[]= {1,2,3,4,5,6,};
// //     printNumbers(array,6);
// //     return 0;

// // }
// // void printNumbers(int array[], int n){
// //      for(int i =0; i<n; i++){
// //         printf("%d\t", array[i]);
// //      }
// //      printf("\n");
// // }
/*int main(){
   int marks[2][3];
   int n1,n2;
   printf("Enter the value of n1, n 2: ");
   scanf("%d %d",&n1,&n2);
    marks[0][0] =  98;
    marks[0][1] = 89 ;
    marks[0][2] = 56 ;
    marks[1][0] = 67 ;
    marks[1][1] = 78 ;
    marks[1][2] =67 ;
   printf("%d" ,marks[n1][n2]);

    return 0;
}*/
int  countodd(int array[],int n);
int main(){
    int array[] = {1,2,3,4,5,6,7};
    printf("%d", countodd(array,6));
return 0;
}
int  countodd(int array[],int n){
    int count = 0;
    for(int i= 0;i<=n;i++){
    if(array[i]%2 != 0 ){

    count++;
} poornima college ho guys 
    
    }
    return count;
}