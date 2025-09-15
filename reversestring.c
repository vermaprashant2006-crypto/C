#include <stdio.h>
#include <string.h>
int main(){
    char s[100] ;
    printf ("Enter a word you want to get reversed\n");
    scanf("%s" , s);
    int i , j=0;
    char rev[100];
    for (i = strlen(s); i>0 ; i--)
    {
        rev[j] = s[i-1];
        ++j;
    }
    rev[j] = '\0';
    printf("the reversed string is %s\n" , rev);
    return 0;
}