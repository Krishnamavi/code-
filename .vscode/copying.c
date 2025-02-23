#include<stdio.h>
int main(){
char s1[100];
char s2[100];
char temp[100];
printf("Enter the first string: ");
gets(s1);
printf("Enter the second string: ");
gets(s2);
for(int i=0;s1[i]!='\0';i++){
temp[i]=s1[i];
}
for(int i=0;s2[i]!='\0';i++){
s1[i]=s2[i];
}
for(int i=0;temp[i]!='\0';i++){
s2[i]=temp[i];
}
printf("First string is: ");
puts(s1);
printf("Second string is: ");
puts(s2);
return 0;
}