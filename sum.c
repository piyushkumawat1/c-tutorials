// #include<stdio.h>
// #include<string.h>

// int main (){
//     char name1[30];
//     char name2[30];
//     int length,result;
//     length = strlen("Bhagirth");
//     printf("Length of name : %d\n",length);
//     strcpy(name1,"Bhagirth");
//     strcpy(name2,"Singh");
//     strcat(name1, " ");
//     strcat(name1,name2);
//     printf("After strcat name1 : %s\n",name1);
//     result = strcmp(name1,"Bhagirth Singh");
//     if (result == 0){
//         printf("Both are equal \n");
//     }
//     else {
//         printf("Both are not Equal\n");
//     } 
//     return 0;   
//     }

// #include<stdio.h>
// #include<string.h>
// struct student {
//         char name[100];
//         int roll_no;
//         float cgpa; 
//     };

// int main(){
//     struct student s[3];
    
//     for(int i = 1; i<=3; i++){
//         printf("Enter student's name : ");
//         scanf("%s",s[i].name);

//         printf("Enter student's roll no : ");
//         scanf("%d",&s[i].roll_no);

//         printf("Enter the student's cgpa : ");
//         scanf("%f",&s[i].cgpa);
//         printf("n");
//     }
//     printf("-------** Student's details **-------\n");
//     for(int i = 1; i<=3; i++){
//         printf("Name of student : %s\n",s[i].name);
//         printf("Roll no : %d\n",s[i].roll_no);
//         printf("cgpa : %.2f\n",s[i].cgpa);
//         printf("\n");
//     }
        
//     return 0; 
// }

#include<stdio.h>
// int main(){
//     int a[] = {10,34 ,56 ,23,90};
//     int key;
//     printf("Enter the search elements : ");
//     scanf("%d", &key);

//     for(int i = 0; i <5; i++){
//         if (a[i] == key) {
//             printf("Elements found at %d index \n",i);
//             return 0;

//         }
//     }
//     printf("Elements not found\n ");    

//     return 0;
// }
// #include<stdio.h>
// void swap( int a , int b);
// int main(){
//     int a = 10; int b = 20;
//     printf("Before swap : a = %d , b = %d\n", a,b);
//     swap(a,b);
//     return 0;
// }
// void swap(int a , int b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After swap : a = %d , b = %d\n", a,b);

// }
// #include<stdio.h>
// void swap (int *a , int *b){
//     int temp;
//     temp = *a;
//     * a = *b;
//      *b = temp;
// }
// int main(){
//     int a = 10; int b = 20;
//     printf("before swap a = %d , b = %d\n",a,b);
//     swap(&a,&b);
//     printf("After swap a = %d , b = %d",a,b);
//     return 0;

// }
// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char *argv[]) {

//     if (argc < 3) {
//         printf("Usage: %s 5 3\n", argv[0]);
//         return 1;
//     }

//     int a = atoi(argv[1]);
//     int b = atoi(argv[2]);

//     printf("Sum = %d\n", a + b);
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *a = (int*)malloc(10*sizeof(int));
//     for (int i = 0; i<10;i++){
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i<10;i++){
//         printf("%d\n",a[i]);
//     }  
//     free(a);
//     return 0;  
// }
#include<stdio.h>
int main(){
    FILE *all ,*even, *odd;
    int n,x;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    all = fopen("all.txt","w");
    for (int i = 0; i<n; i++){
        scanf("%d\n",&x);
        fprintf(all,"%d\n",x);
    }
    fclose(all);
    all = fopen("all.txt", "r");
    even = fopen("even.txt","w");
    odd = fopen("odd.txt","w");
    while(fscanf(all, "%d", &x) != EOF) {
        if (x%2 ==0)
            fprintf(even,"%d\n",x);
        
        else
            fprintf(odd, "%d\n",x);
        
    }
    fclose(all);
    fclose(even);
    fclose(odd);
    return 0;
}
