#include <stdio.h>
#include<math.h>
float square(int num);
int main() {
int n;
printf("enter the value of number");
scanf("%d",&n);
square(n);
return 0;
}
float square(int num){
printf("Square of the number is:%f/n",num*num);
return num*num;
}6
