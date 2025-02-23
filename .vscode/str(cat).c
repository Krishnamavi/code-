#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
char str2[100];
printf("Enter the 1st string:");
gets(str1);
printf("ENter the second string:");
gets(str2);
strcat(str1,str2);
printf("1st string:");
puts(str1);
return 0;
}