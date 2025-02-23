#include<stdio.h>
int fib(int num);
int main(){
int n;
printf("Value:");
scanf(" %d",&n);
printf("Fibbonacci series is: ");
for(int i=0;i<n;i++){
printf(" %d",fib(i));
}
return 0;
}
int fib(int num){
if(num==0){
return 0;
}
if(num==1){
return 1; 
}
int pattern=fib(num-1) + fib(num-2);
return pattern;
}
