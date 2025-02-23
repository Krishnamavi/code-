#include<stdio.h>
int main(){
char s1[100];
char s2[100];
char temp[100];
printf("Enter the first string: ");
gets(s1);
printf("Enter the second string: ");
gets(s2);
int count1=0;
for(int i=0;s1[i]!='\0';i++){
count1++;
}
int count2=0;
for(int i=0;s2[i]!='\0';i++){
count2++;
}
if(count1>count2){
printf("First string is greater: ");
puts(s1);
}
else if(count2>count1){
printf("Second string is greater: ");
puts(s2);
}
else{
printf("String are equal: ");
}
return 0;
}