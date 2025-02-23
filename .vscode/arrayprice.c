#include<stdio.h>
int main(){
float price[3];
printf("Enter the price of 1: ");
scanf("%f", &price[0]);
printf("Enter the price of 2: ");
scanf("%f", &price[1]);
printf("Enter the price of 3: ");
scanf("%f", &price[2]);
float result=0.18*(price[0]+price[1]+price[2])+(price[0]+price[1]+price[2]);
printf("Price is:%.2f",result);
return 0;
}