#include<stdio.h>
int fact(int num);
int main(){
int n;
printf("VALUE OF N IS:");
scanf("%d",&n);
fact(n);
return 0;
}
int fact(int num){
if(num==0||num==1){
return 1;
}
int total=num*fact(num-1);
printf("At num=%d:Factorial is=%d\n",num,total);
return total;
}


