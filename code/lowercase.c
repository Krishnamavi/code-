#include<stdio.h>
int main(){
char str[100];
printf("Enter the string: ");
gets(str);
for(int i=0;str[i]!='\0';i++){
if(str[i]>='a' && str[i]<='z'){
str[i]=str[i]-32; 
}
}
printf("Uppercase string: ");
puts(str);
for(int i=0;str[i]!='\0';i++){
if(str[i]>='A' && str[i]<='Z'){
str[i]=str[i]+32; 
}
}
printf("Lowercase string: ");
puts(str);
return 0;
}