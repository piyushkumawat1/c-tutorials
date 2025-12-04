#include<stdio.h>
#include<math.h>
#define pi 3.14
// function declarartion 
float Areaofcircle(int radius) ;
float Areaofsquare(int side ); 
int main(){
    int radius,side;
    Areaofcircle(radius);
    Areaofsquare(side);
    return 0;
}
float Areaofcircle(int radius){
    float Area;
    printf("Enter the radius :");
    scanf("%d",&radius);
    Area = pi*radius*radius;
    printf("Area of circle is %f\n", Area);
    return Area;


}
float Areaofsquare(int side){
    float area;
    printf("Enter the side :");
    scanf("%d",&side);
    area = side*side ;
    printf("Area of square %f\n",area);
    return area;
}

       
    
