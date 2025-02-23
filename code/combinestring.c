#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
char str2[100];
int i,j;
printf("Enter the 1st string:");
gets(str1);
printf("ENter the second string:");
gets(str2);
while(str1[i]!='\0'){
i++;
}
while(str2[j]!='\0'){
str1[i]=str2[j];
i++;
j++;
}
printf("COmbined string is:");
puts(str1);
return 0;
}