#include<stdio.h>
int main(){
char str1[100];
char str2[100];
int l=0,f=1;
char a,b;
printf("Enter the string : ");
gets(str1);
while(str1[l]!='\0'){
l++;
}
for(int i=0;i<l;i++){
str2[i]=str1[l-1-i];
}
str2[l]='\0';
for(int i=0;i<l;i++){
if(str1[i]!=str2[i]){
f=0;
break;
}
}
if(f==1){
printf("Pallandrome");
}
else{
printf("Not a pallandrome :");
}
return 0;
}