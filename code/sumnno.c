#include<stdio.h>
int sum(int num);
int main(){
int n;
printf("VALUE OF N IS:");
scanf("%d",&n);
sum(n);
return 0;
}
int sum(int num){5
if(num==0){
return 0;
}
int Total=num+sum(num-1);
printf("At num=%d,Sum is:%d\n",num,Total);
return Total;
}