#include<stdio.h>
#include<math.h>

float circleArea ( float radius );
float squareArea ( float side );
float rectangle (float length, float width);

int main(){
  float radius;
  printf(" Enter the radius : ");
  scanf("%f", &radius);
    printf( "area of circle  is =  %4f\n" ,circleArea(radius));
}





float  circleArea( float radius) {

  return 3.14*radius*radius ; 
}