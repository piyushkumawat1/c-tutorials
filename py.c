// #include<stdio.h>
// int main (){
//    int aadhar[5];
//    int *ptr = aadhar;
//    for(int i =0;i<5;i++){
//       printf(" at %d index : ",i);
//       scanf("%d", &aadhar[i]);

//    }
//    for (int i =0 ; i<5;i++){
//       printf("%d index : %d\n", i, aadhar[i]);
//    }
//    return 0;
// }
// #include<stdio.h>
// void printNumbers(int *arr, int n);

// int main(){
//    int n;
//    printf("Number of elements : ");
//    scanf("%d", &n);
//    int arr[n];
//    printNumbers(arr , n);
//    return 0;
// }
// void printNumbers(int *arr, int n){
//    for(int i =0; i <n; i++){
//       printf("Enter the %d elements : ", i);
//       scanf("%d", &arr[i]);
//    }
//    for (int i =0; i <n ; i++){
//       printf("%d\t", arr[i]);
//    }
//    printf("\n");
// }
// #include<stdio.h>
// int main(){
//    int colum, row;
//    printf("Enter the number of student : ");
//    scanf("%d", &colum);
//    printf("Enter the number of subject : ");
//    scanf("%d", &row);
//    int marks[colum][row];
//    for (int i = 0 ; i< colum ; i++){
//       printf("For student %d \n",i);
//       for (int j =0; j<row ; j++){
//       printf("Enter the %d subj marks : ",j);
//       scanf("%d", &marks[i][j]);
//    }
// }
//    for (int i =0 ; i<colum; i++){
//       printf("marks of student %d\n",i);
//       for (int j =0; j<row;   j++){
//       printf("%d\n" ,marks[i][j]);
//    }
// }

// }

// #include<stdio.h>
// int main (){
//    int count = 0,n;
//    printf("Enter the number of elements : ");
//    scanf("%d", &n);
//    int arr[n];
//    for (int i = 0,j=1; i<n; i++,j++){
//       printf("Enter the %d elements : ", j);
//       scanf("%d",&arr[i]);
//       if (arr[i] % 2 != 0){
//          count +=1;
//       }
//    }
//    printf("odd numbers in array is %d \n", count);
//    return 0;
// }
// #include<stdio.h>
// int main(){
//    int arr[] = {1,2,3,4};
//    for(int i = 3; i>=0 ; i--){
//       printf("%d\t",arr[i]);
//    }
// return 0;
// }
// #include<stdio.h>
// int main (){
//    int arr[] = {1,2,3,4,5};
//    int n = sizeof(arr)/4;
//    for(int i = 0 ; i<n/2; i++){
//       int firstvalue = arr[i];
//       int secondvalue = arr[n-i-1];
//       arr[i] = secondvalue;
//       arr[n-i-1] = firstvalue;
//    }
//    for(int i = 0 ; i<n ; i++){
//       printf("%d\n",arr[i]);
//    }

// return 0;
// }
// #include<stdio.h>
// int main (){
//    int n;
//    printf("Number of elements of fibinacci (n>2):");
//    scanf("%d",&n);
//    int fib[n];
//    fib[0] = 0;
//    fib[1] = 1;
//    for(int i =2; i<n; i++){
//       fib[i] = fib[i-1] + fib[i-2];
//       printf("%d\t", fib[i]);
//    }

//    return 0;
// }
// #include<stdio.h>
// void storetable(int arr[][10], int n , int m, int number );
// int main (){
//    int tables[2][10];
//    storetable(tables,0,10,2);
//    storetable(tables,1,10,3);
//    storetable(tables,2,10,4);
//    storetable(tables,3,10,5);
//    storetable(tables,4,10,6);
//    storetable(tables,5,10,7);
//    storetable(tables,6,10,8);
//    storetable(tables,7,10,9);
//    storetable(tables,8,10,10);
//    storetable(tables,9,10,11);
//    for(int j =0; j<10; j++){
//    for(int i=0; i<10; i++)
// {  printf("%d\t",tables[j][i]);

// }  
// printf("\n");
//    }
//  return 0;
// }

// void storetable(int arr[][10], int n, int m, int number){
//    for(int i = 0; i<m; i++){
//       arr[n][i] = number * (i+1);
//    }

//    }
// #include<stdio.h>
// void printname(char arr[]);

// int main (){
//    char firstname[] = "Piyush";
//    char lastname[] = "Kumawat";
//    printname(firstname);
//    printname(lastname);
//    return 0;
// }
// void printname(char arr[]){
//    for(int i = 0; arr[i] != '\0'; i++){
//       printf("%c" ,arr[i]);

//    }
//    printf("\t");
// }
#include<stdio.h>
int fact(int n);
int main()
{
   int n;
   printf("Enter the number : ");
   scanf("%d",&n);
   int result  = fact(n);
   printf("Factorial of %d : %d\n",n,result);
   return 0;

}
int fact(int n)
{
   if (n == 1 ) 
   {
      return 1;
   }
   return n*fact(n-1);
}
