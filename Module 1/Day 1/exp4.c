/*
4. Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.
*/
#include<stdio.h>
void add(int a,int b){
    printf("add is %d",a+b);
}
void sub(int a,int b){
    printf("sub is %d",a-b);
}
void mul(int a,int b){
    printf("mul is %d",a*b);
}
void div(int a,int b){
    printf("div is %d",a/b);
}
void mod(int a,int b){
    printf("mod is %d",a%b);
}
int main(){
    int op1,op2;
    char opr;
    printf("Enter the number1 :");
    scanf("%d",&op1);
    while (getchar() != '\n');
    printf("select the  operator(+,-,*,/,%) :");
    scanf("%c",&opr);
    printf("Enter the number2 :");
    scanf("%d",&op2);
    switch (opr){
        case '+': add(op1,op2); break;
        case '-': sub(op1,op2); break;
        case '*': mul(op1,op2); break;
        case '/': div(op1,op2); break;
        case '%': mod(op1,op2); break;
        default : printf("run"); break;
    }
    return 0;
}