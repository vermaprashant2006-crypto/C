#include <stdio.h>
int main(){
    int i,n=4,a=1,j,k;
    for(i=1;i<=5;i++){
        for(j=n;j>=0;j--){
            printf(" ");
        }
        for (k=1;k<=a;k++){
            printf("* ");
        }
        printf("\n");
        a++;
        n--;
}
}
    