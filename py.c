#include<stdio.h>
#include<math.h>
int main(){
   float price[3] = {};
   for (int i = 0, n = 1; i<3 && n<=3; i++,n++){
      printf("Enter the price of item %d : ",n);
      scanf("%f",&price[i]);
   }
   for(int i = 0; i<3; i++){
      price[i] = 0.18 * price[i] + price[i];
   }
   printf("Adding %%18 gst \n");
   float total = 0;
   for(int i = 0; i<3; i++){
      printf("Final price of item %d = %f\n", i,price[i]);
      total += total + price[i];
   }
   printf("Total bill = %d\n", (int)total);
   return 0;
}