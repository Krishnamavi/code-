#include<stdio.h>
void sum(int x,int y);
void main (){
int a,b;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
sum(a,b);
}
void sum(int a,int b){
 int sum=0;
sum=a+b;
printf("Sum is :%d",sum);
}