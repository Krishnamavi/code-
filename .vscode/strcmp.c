#include<stdio.h>
int main(){
char s1[100];
char s2[100];
int result;
printf("Enter the first string: ");
gets(s1);
printf("Enter the second string: ");
gets(s2);
result=strcmp(s1, s2);
if(result==0){
printf("Both are equal :");
}
else if(result>0){
printf("FIrst string is gretawer : ");
puts(s1);
}
else{
printf("Second string is greater  :");
puts(s2);
}
return 0;
}