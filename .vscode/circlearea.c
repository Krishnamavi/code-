#include<stdio.h>
float SquareArea(float side);
float CircleArea(float radius);
float RectangleArea(float a,float b);
int main (){
float side;
printf("Enter the value of side\n");
scanf("%f",&side);
SquareArea(side);
float radius;
printf("radius:");
scanf("%f",&radius);
CircleArea(radius);
float a,b;
printf("Value of a:\n");
scanf("%f",&a);
printf("Value of b:\n");
scanf("%f",&b);
RectangleArea(a,b);
return 0;
}
float SquareArea(float side){
printf("Value of area:%f\n",side*side);
return side*side;
}
float CircleArea(float radius){
printf("Value of area of circle is:%f\n",3.14*radius*radius);
return 3.14*radius*radius;
}
float RectangleArea(float a,float b){
printf("Value of area:%f\n",a*b);
return a*b;
}

