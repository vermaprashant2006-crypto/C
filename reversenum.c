#include <stdio.h>
int main(){
    int n , rev =0 , x ;
    printf("Enter a Number: ");
    scanf("%d" , &n);
    while (n!=0){
        x = n%10;
        rev = rev*10 + x;
        n/=10;
    }
    printf("Reversed Number: %d\n" , rev);
}