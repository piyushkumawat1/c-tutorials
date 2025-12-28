// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements : ");
//     scanf("%d",&n);
//     int a[n];
//     for(int i = 0; i<n; i++){
//         printf("Enter the element : ");
//         scanf("%d", &a[i]);  
//     }
//     int max = a[0];
//     for (int i =1; i<n; i++){
//         if (a[i] > max){
//             max = a[i];
//         }
//     }
//     printf("Largest = %d\n",max);    
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a[10], pos = 0, neg = 0, Zero = 0;
//     printf("Entr the 10  Elements : ");
//     for(int i= 0; i<10; i++){
//         scanf("%d", &a[i]);
//         if( a[i] < 0) neg++;
//         else if(a[i]>0) pos++;
//         else Zero++;
//     }
//     printf("Positive Count : %d\nNegative Count : %d\nZero : %d\n", pos,neg,Zero);
// //     return 0;
// // }
// #include<stdio.h>

// int main(){
//     FILE *fp = fopen("students.txt", "w");
//     char name[30];

//     for(int i=0;i<5;i++){
//         scanf("%s", name);
//         fprintf(fp, "%s\n", name);
//     }
//     fclose(fp);

//     fp = fopen("students.txt", "r");
//     while(fgets(name, 30, fp))
//         printf("%s", name);

//     fclose(fp);
// }
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements  : ");
    scanf("%d",&n);
    float *marks = (float*)malloc;
}
