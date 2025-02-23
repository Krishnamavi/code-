#include<stdio.h>
void prime(int x);
void main(){
int a;
printf("Enter the limit: ");
scanf("%d",&a);
prime(a);
}
void prime(int x){
int count;
printf("Prime numbers are:");
for(int i=1;i<=x;i++){
count=0;
for(int j=1;j<=i;j++){
if(i%j==0){
count++;
}
}
if(count==2){
printf(" %d", i);
}
}
}