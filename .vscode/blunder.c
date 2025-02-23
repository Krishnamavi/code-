#include<stdio.h>
int main(){
char str[50];
printf("Enter the word: ");
scanf("%s",str);
int count=0;
for(int i=0;str[i]!='\0';i++){
char ch=str[i];
for(int j='a';j<='z';j++){
if(str[i]==j||str[i+1]==j){
count++;
}
}
if(count>0){
printf("\nFrequency of character is %c is :%d",ch,count);
}   
}
}