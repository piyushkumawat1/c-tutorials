#include<stdio.h>

int  convertpercnt( int science, int math , int sanskrit);
int main (){
    int science, math, sanskrit;
    printf(" science marks : ");
    scanf( " %d", &science );
    printf( " math marks :");
    scanf( " %d", & math);
    printf(" sanskrit marks : ");
    scanf( " %d", &sanskrit );
     float percentage ; 
    printf( " science  marks is %d\n",science );
    printf( "math marks is : %d\n", math);
    printf(" sanskrit marks is %d\n", sanskrit );
    printf( " percentage is %d\n ", convertpercnt(science , math , sanskrit ) ); 

convertpercnt ( science, math , sanskrit );

return 0;
}
int  convertpercnt ( int science, int math, int sanskrit ){
     
    return ((science + math + sanskrit)/3) ;
}