#include<stdio.h>
float converttemp(float celsius);
int main(){
float c;
printf("Temperature in celsius:");
scanf("%f",&c);
converttemp(c);
return 0;
}
float converttemp(float celsius){
float fahrenhit=celsius*(9.0/5.0)+32;
printf(" At celsius :%f.Temperature in fahernhit is:%f",celsius,fahrenhit);
return fahrenhit;
}