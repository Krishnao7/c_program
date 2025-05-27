#include<stdio.h>


int main(){
   
    int length = 5;
    int width = 10;

//area or parameter of rectangle
    int area1 = length*width;
    int perameter = 2*(length+width);
     
    printf("Area = %d\n", area1);
    printf("Perimeter = %d\n", perameter);


    //area or Circumference of acircle
     float radius=5 ,Circumference,area , PI= 3.1416;
     
   area = PI * radius * radius;
    Circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", Circumference);    
     
  return 0;

}