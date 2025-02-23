#include<stdio.h>
int sum(void);
void mainṇ(){
int s;
s=sum();
printf("Sum is:%d",s);
}
int sum(){
int a,b,sum=0;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
sum=a+b;
return sum;
}