#include<stdio.h>
int main(){
char firstname[]="Krishna";
char lastname[]="Mavi";
printf("Enter your first name");
scanf("%s", &firstname);
printf("enter your last name");
scanf("%s",&lastname);
printf("%s",firstname);
printf("%s",lastname);
return 0;
}