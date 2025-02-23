#include<stdio.h>
void ascii(char str[50]);
int main(){
char str[50];
printf("Enter the word: ");
scanf("%s",str);
ascii(str);
return 0;
}
void ascii(char str[50]){
for(int i=0;str[i]!='\0';i++){
int ch=str[i];
if(ch==str[i]){
printf("\nAscii value is: %d", ch);
}
}
}