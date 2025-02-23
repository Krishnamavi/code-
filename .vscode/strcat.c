#include<stdio.h>
void salting(char password[10]);
int main(){
char name[50];
printf("String is: ");
fgets(name,50,stdin);
printf("String is: ");
puts(name);
char password[50];
printf("enter pasword: ");
scanf("%s", &password);
salting(password);
}
void salting(char password[10]){
strcat(name,password);
puts(namepassword);    
}