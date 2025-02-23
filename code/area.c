#include<stdio.h>
#include<math.h>
float SquareArea(float side);
int main (){
float side;
printf("Enter the value of side");
scanf("%f",&side);
SquareArea(side);k
return 0;
}
float SquareArea(float side){
    
printf("Value of area:%f",side*side);
return side*side;
}