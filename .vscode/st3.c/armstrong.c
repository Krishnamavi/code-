#include<stdio.h>
int armstrong(int x);
int main(){
int a,i;
printf("Enter the number: ");
scanf("%d",&a);
i=armstrong(a);
if(i==a){
printf("Armstrong number: %d",i);
}
else{
printf("Not Armstrong number: ");
}
return 0;
}
int armstrong(int x){
int sum=0;
while(x>0){
sum=sum + (x%10)*(x%10)*(x%10);
x=x/10;
}
return sum;
}