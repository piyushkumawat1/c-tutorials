#include<stdio.h>
int fab(int n);
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    fab(n);
    printf("fab of %d = %d\n",n,fab(n));
    

}

int fab(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fabNm1 = fab(n-1);
    int fabNm2 = fab(n-2);
    int fabN = fabNm1 + fabNm2;
    
    return fabN;
    
}