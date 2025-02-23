#include<stdio.h>
#include<math.h>
int root(int x);
int main(){
int a;
printf("Value of a:");
scanf("%d",&a);
//printf("Value of b:");
//scanf("%d",&b);
root(a); 
}
int root(int x){
float result=sqrt(x);
printf("root is:%.2f",result);
return result; 
}