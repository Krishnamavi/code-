#include<stdio.h>
void slice(char name[50],int n,int m);
int main(){
char name[50];
int a,b;
printf("Enter:");
fgets(name,50,stdin);
printf("Enter value of a:");
scanf("%d",&a);
printf("enter value of b:");
scanf("%d",&b);
slice(name,a,b);
}
void slice(char name[50],int n,int m){
int j=0;
char newname[50];
for(int i=n;i<=m;i++,j++){
newname[j]=name[i];    
}
newname[j]='\0';
printf("Sliced value is: ");
puts(newname);
}