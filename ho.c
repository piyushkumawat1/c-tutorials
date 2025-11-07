// #include<stdio.h>
// int main (){
//     int n ;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         if(i%2==!0){
//             continue;
//         }
//         else 
//         printf("%d  \n",i);
        

//     }
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int n,reminder,sum = 0;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     while(n!=0){
//         reminder = n%10;
//         sum+=reminder;
//         n = n/10;
//     }
//     printf("Sum of digits : %d\n",sum);
//     return 0;
//}
// #include<stdio.h>
// int main(){
//     int n,reminder,reverse = 0;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     while(n!=0){
//         reminder = n%10;
//         reverse = reverse*10 + reminder;
//         n = n/10;
//     }
//     printf("Reverse of digits : %d\n",reverse);
//     return 0;
// }
// #include<stdio.h>
// int main (){
//     int n,sum =0;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     for(int i=1; i<=n/2;i++){
//         if(n%2 ==0){
//          sum+=i;
//         }
//     }
//     if (sum ==n && n>0) {
//         printf("%d is perfect number\n",n);
//     }
//     else {
//     printf("%d is not a perfect number\n",n);
//     }
    
//     return 0;
// }
#include<stdio.h>
int main (){
    int rows;
    printf("Enter the number :");
    scanf("%d",&rows);
    for(int i =1; i<=rows; i++){ 
        for (int j =1; j<=i; j++){
            printf("*");
            

        } 
        printf("\n");
    }
return 0;
}