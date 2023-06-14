/*
Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F"
*/
#include<stdio.h>
void grade(int num){
    if (num>=90 && num<=100){
        printf("Grade A");
    }
    if (num>=75 && num<=89){
        printf("Grade B");
    }
    if (num>=60 && num<=74){
        printf("Grade C");
    }
    if (num>=50 && num<=59){
        printf("Grade D");
    }
    if (num>=0 && num<=49){
        printf("Grade F");
    }
}
int main(){
    int num;
    printf("enter the student total marks\n");
    scanf("%d",&num);
    grade(num);
    return 0;
}