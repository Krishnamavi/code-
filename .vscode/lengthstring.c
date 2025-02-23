#include<stdio.h>
void printstring(char arr[]);
int countlength(char arr[]);
int main() {
char name[10];
printf("Enter your name: ");
fgets(name,10,stdin);
printf("your name is: ");
puts(name);
int length=countlength(name);
printf("Name length is:%d", length);
return 0;
}
int countlength(char arr[]){
int count=0;
for(int i=0;arr[i]!='\0';i++){
count ++;
}
return count-1;
}