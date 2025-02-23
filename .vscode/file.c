#include<stdio.h>
int main (){
FILE*fptr;
fptr=fopen("NEW.txt","w");
char name[50];
printf("Enter the word of file:");
scanf("%c", name);
fprintf(fptr,"%c",'name');
fclose(fptr);
return 0;
}