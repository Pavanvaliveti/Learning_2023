/*
1. Write a function to find biggest of 2 numbers using 
    - if else
    - ternary operator         */
#include<stdio.h>
int greatest(int a,int b){
    if (a>b){
        printf("A is Greatest");
    }
    else{
        printf("B is Greatest");
    }
}
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    greatest(a,b);
    a>b?printf("a is greatest"):printf("b is greatest");//ternery operator
}
