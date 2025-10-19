#include<stdio.h>
#include<math.h>
int main(){
    int rupees,paisa;
    float price = 12.15;
    rupees = (int)price;
    printf(" Rupees = %d",rupees);
    paisa = (round)(price - rupees )*100;
    printf(" Paisa = %d",paisa );


    return 0;
}