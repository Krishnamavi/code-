#include<stdio.h>
int sum(int x,int y);
void main(){
int a,b,k;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
k=sum(a,b);
printf("SUM IS :%d",k);
}
int sum(int x,int y){
int add;
add=x+y;
return add;
}