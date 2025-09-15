#include <stdio.h>
int main(){
    char ch[100];
    int i, vowels=0, consonants=0;
    printf("Enter a string: ");
    fgets(ch, sizeof(ch), stdin);
    for(i=0; ch[i]!='\0'; i++){
        if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z')){
            if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' ||
               ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}