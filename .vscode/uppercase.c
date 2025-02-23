#include<stdio.h>
void uppercase(char str[50]);
int main(){
char str[50];
printf("Enter the lowercase value: ");
fgets(str,50,stdin);
uppercase(str);
return 0;
}
void uppercase(char str[50]){
char ch;
for(int i=0;str[i]!='\0';i++){
ch=str[i]-32;
break;
}
printf("Upper case value is: %c", ch);
}