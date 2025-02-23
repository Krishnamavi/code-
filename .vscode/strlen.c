#include<stdio.h>
int main(){
char name[50];
printf("enter your name: ");
fgets(name,50,stdin);
printf("your name is: ");
puts(name);
int length=strlen(name);
printf("Length of string: %d",length-1);
return 0;    
}