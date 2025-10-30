#include<stdio.h>
// }
void printNumbers(int array[], int n);
int main(){
    int array[]= {1,2,3,4,5,6,};
    printNumbers(array,6);
    return 0;

}
void printNumbers(int array[], int n){
     for(int i =0; i<n; i++){
        printf("%d\t", array[i]);
     }
     printf("\n");
}
// /*int main(){
//    int marks[2][3];
//    int n1,n2;
//    printf("Enter the value of n1, n 2: ");
//    scanf("%d %d",&n1,&n2);
//     marks[0][0] =  98;
//     marks[0][1] = 89 ;
//     marks[0][2] = 56 ;
//     marks[1][0] = 67 ;
//     marks[1][1] = 78 ;
//     marks[1][2] =67 ;
//    printf("%d" ,marks[n1][n2]);

//     return 0;
// }*/
// int  countodd(int array[],int n);
// int main(){
//     int array[] = {1,2,3,4,5,6,7};
//     printf("%d", countodd(array,6));
// return 0;
// }
// int  countodd(int array[],int n){
//     int count = 0;
//     for(int i= 0;i<=n;i++){
//     if(array[i]%2 != 0 ){

//     count++;
// } 
    
//     }
//     return count;
// }