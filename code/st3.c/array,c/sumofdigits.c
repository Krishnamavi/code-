#include <stdio.h>
int main(){
int ch;
printf("Enter a 3 digit number: ");
scanf("%d",&ch);
int a,b,c;
a=ch%10;
ch=ch/10;
b=ch%10;
ch=ch/10;
c=ch;
int sum=a+b+c;
printf("The sum of digits is: %d",sum);
return 0;
}