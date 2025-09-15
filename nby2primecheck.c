#include <stdio.h>
int main(){
    int number , isPrime = 1;
    printf("enter a number : ");
    scanf("%d" , &number);
    if (number<=1){
        isPrime = 0;
    }
    else{
        for (int i=2; i<=number/2 ;i++)
        {
            if (number%i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    printf("Prime \n");
    else 
    printf("Not prime \n");
    return 0;
}