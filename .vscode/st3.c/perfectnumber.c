#include<stdio.h>
int pernumber(int x);
void main(){
int limit;
printf("Enter the limit: ");
scanf("%d",&limit);
printf("Perfect number are: ");
for(int i=1;i<=limit;i++){
if(i==pernumber(i)){
printf(" %d", i);
}
}
}
int pernumber(int x){
int sum=0;
for(int i=1;i<=x/2;i++){
if(x%i==0){
sum=sum+i;
}
}
return sum;
}