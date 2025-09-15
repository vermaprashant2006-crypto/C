#include <stdio.h>
int main(){
    int a, b, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Choose the operation you want to happen : 1-Addition 2-Subtraction 3-Multiplication 4-Division \n");
    scanf("%d", &n);
    switch(n){
        case 1:
        printf("the sum is %d\n" , a+b);break;
        case 2:
        printf("the difference is %d\n" , a-b);break;
        case 3:
        printf("the product is %d\n" , a*b);break;
        case 4:
        if(b != 0)
            printf("the quotient is %d\n" , a/b);
        else
            printf("Division by zero error\n");
            break;
            default:
            printf("Invalid operation\n");
}
}