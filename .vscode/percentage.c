#include<stdio.h>
float percentage(float s,float p,float m);
int main(){
float s,p,m;
printf("Marks of sanskrit:\n");
scanf("%f",&s);
printf("Marks of science:\n");
scanf("%f",&p);
printf("Marks of math:\n");
scanf("%f",&m);
percentage(s,p,m);
return 0;
}
float percentage(float p,float s,float m){
float total=s+p+m;
float percent=(total/300)*100;
printf("Percentage is:%f",percent);
return percent;
}
