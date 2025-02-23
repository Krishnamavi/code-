#include<stdio.h>
int reverse(int x);
int main(){
int a,c;
printf("Enter the value:");
scanf("%d", &a);
c=reverse(a);
printf("Reverse is: %d",c);
return 0;
}
int reverse(int x){
int rev=0;
while(x>0){
rev=(rev*10)+(x%10);
x=x/10;
}
return rev;
}