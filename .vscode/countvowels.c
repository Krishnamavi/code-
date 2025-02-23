#include<stdio.h>
void countvowels(char str[50]);
int main(){
char str[50];
printf("Enter string: ");
scanf("%s",str);
countvowels(str);
}
void countvowels(char str[50]){
int vowelcount=0;
for(int i=0;str[i]!=0;i++){
if(str[i]=='a'|| str[i]=='i'|| str[i]=='e'|| str[i]=='o'|| str[i]=='u'){
vowelcount++;
}
}
printf("Total Vowel are: %d",vowelcount);
}