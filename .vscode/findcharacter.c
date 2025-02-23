#include<stdio.h>
int findchar(char str[50],char ch);
int main(){
char str[50];
char s;
printf("Enter string: ");
fgets(str,50,stdin);
printf("Enter the charachter: ");
scanf("%c",&s);
findchar(str,s);
return 0;
}
int findchar(char str[50],char ch){
for(int i=0;str[i]!=0;i++){
if(str[i]==ch){
printf("character is present: ");
return 1;
}
//if(str[i]=='a'|| str[i]=='i'|| str[i]=='e'|| str[i]=='o'|| str[i]=='u'){
//vowelcount++;
}
printf("NOt present: ");
}