#include<stdio.h>
void salting(char password[50]);
int main(){
char password[50];
printf("Enter pass: ");
fgets(password,50,stdin);
printf("Your pass: ");
puts(password);
salting(password);
return 0;
}
void salting(char password[50]){
char newpassword[100];
char salting[]="123";
strcpy(newpassword,password);
strcat(newpassword,salting);
printf("Salted password is: ");
puts(newpassword);
}
    