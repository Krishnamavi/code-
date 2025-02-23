#include<stdio.h>
#include<string.h>
int main(){
char name1[50];
printf("Enter the string 1: ");
fgets(name1,50,stdin);
printf("Your string is: ");
puts(name1);
char name2[10];
printf("Enter the string 2: ");
fgets(name2,50,stdin);
printf("Your string is:");
puts(name2);
strcpy(name2,name1);
printf("Copied string is:");
puts(name1);
return 0;
}