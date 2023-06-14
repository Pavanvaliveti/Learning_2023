/*
Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
*/
#include<stdio.h>
void t(int p,int m,int c){
    int total =p+m+c;
    float percentage=( total / 300.0) * 100;
    printf("total is %d\n",total);
    printf("percenatge is %f % \n",percentage);
}
int main(){
    int roll,p,m,c;
    char name[30];
    printf("Enter the roll: ");
    scanf("%d",&roll);
    printf("Enter the name : ");
    scanf(" %[^\n]s ",name);
    printf("Enter the Marks of Physics, Math and Chemistry: ");
    scanf("%d %d %d",&p,&m,&c);
    printf("\n Roll no : %d\n Name is %s\n",roll,name);
    t(p,m,c);
}