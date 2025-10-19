// #include <stdio.h>
// int main ()
// {int n;
//     printf( "Enter a number : ");
//     scanf( "%d", &n);
//     n>=0&&n<=100  ? printf( " Right number you can go now "): printf( "Wrong number you are fired ");

// 	return 0;
// }
#include<stdio.h>
// int main(){
//     int a = 20, b = 28;
//     while(a!=b){
//         if(a>b)  a-=b;
//         else b-=a;
//     }
//     printf("GCD = %d", a);

// }
// #include<stdio.h>
// int main(){
//     int a = 12, b = 15, m= (a>b)?a:b;
//     while(1){
//         if(m%a!=0 && m%b==0){
//          printf("Lcm = %d", m);
//              break;
//         }
//     }
//     m++;
// }
#include<stdio.h>
int main(){
    int n ;
    printf("enter the value of n : ");
    scanf("%d",&n);
    if (n>=10) 
    for(int i = 1; i<=10; i++)
        printf("%d x %d = %d\n", n,i,n*i);
    else 
        do {
            printf("hello guys ");
        }
        while(n<10);
    return 0;    
}