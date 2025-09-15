#include <stdio.h>
int main(){
    int n=5;
    int temp=4,count=1,m=0,k=0;
    for (int i=1;i<=n;++i){
        for (int j=1;j<=temp;++j){
            printf(" ");
        }
        count=i;
        for(k=1;k<=i;++k){
            printf("%d",count, " ");
            count++;
        }
        count=count-2;
        for(m=1;m<i;m++){
            printf("%d",count);
            count--;
        }
        printf("\n");temp--;
    }
}