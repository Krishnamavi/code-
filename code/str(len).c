#include<stdio.h>
int main(){
char str[100];
printf("Enter the string:");
gets(str);
int i=strlen(str);
printf("LEngth of string is: %d",i);
return 0;
}