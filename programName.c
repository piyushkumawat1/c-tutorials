// #include<stdio.h>
// int sum(int n);
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     int result = sum(n);
//     printf("Sum = %d\n",result);
//         int reverse = 0;
//     while(result != 0){
//         int reminder = result%10;
//         reverse = (reverse *10)+reminder;
//         result = result/10;
//     }
//     printf("Reverse of sum = %d\n",reverse);
//     return 0;
// }
// int sum(int n){
//     int sum =0;
//     for(int i =1; i<=n; i++){
//        sum = sum +i;
//      }
//     return sum;
// }
// #include<stdio.h>
// int main(){
//     int n;
//     do
//     {printf("Enter the number : ");
//         scanf("%d",&n);
//     }while(n % 7 != 0);
//     printf("You Entered multiple of number 7.\nProgram Exiting\n");
//     return 0;
// }
// #include<stdio.h>
// int fact(int n);
// int main(){
//     int sum =0;
//     for(int i =5; i<=50; i++){
//             sum =sum+i;
//         }
//     printf("Sum = %d\n",sum);
    
//     return 0;
// }
// #include<stdio.h>
// int sumN(int x);
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     int result = sumN(n);
//     printf("Sum = %d\n", result);
// return 0;
// }
// int sumN(int x){
//     if (x == 1) {
//         return 1;
//     }
//     return x + sumN(x-1);
//}
// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;
//     printf("%u", *ptr);
//     scanf("%d", &age);


//     return 0;

// }