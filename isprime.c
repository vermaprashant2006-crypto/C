#include <stdio.h>
#include <math.h>

int main(){
    int number , isPrime = 1;
    printf("enter a number");
    scanf("%d" , &number);
    if (number<=1){
        isPrime = 0;
    }
    else{
        for (int i=2; i<= (sqrt(number));i++)
        {
            if (number%i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    printf("Prime");
    else 
    printf("not prime");
}