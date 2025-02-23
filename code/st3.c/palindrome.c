#include<stdio.h>
int pallindrome(int x);
int main(){
int a,c;
printf("Enter the number: ");
scanf("%d",&a);
c=pallindrome(a);
if(c==a){
printf("The number is pallindrome:%d ",c);
}
else{
printf("Not a pallandrome: ");
}
return 0;
}
int pallindrome(int x){
int rev=0;
while(x>0){
rev=(rev*10)+(x%10);
x=x/10;
}
return rev;
}