#include<stdio.h>
int main(){
char str1[100];
char str2[100];
int i=0,l=0;
printf("Enter the string: ");
gets(str1);
while(str1[l]!='\0'){
l++;
}
for(i=0;i<l;i++){
str2[i]=str1[l-1-i];
}
str2[i]='\0';
printf("THe reversed string is : ");
puts(str2);
return 0;
}
    
    

