#include <stdio.h>
int main() {
int a,b,c;
printf("Enter three number: ");
scanf("%d%d%d",&a,&b,&c);
int max1,max2;
max1=a>b?a:b;
max2=c>max1?c:max1;
printf("The greater number is : %d",max2);
return 0;
}