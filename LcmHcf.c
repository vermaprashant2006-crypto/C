    #include <stdio.h>
    int main(){
    int a, b, i, lcm, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0)
            hcf = i;
    }
    lcm = (a*b)/hcf;
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    return 0;
}