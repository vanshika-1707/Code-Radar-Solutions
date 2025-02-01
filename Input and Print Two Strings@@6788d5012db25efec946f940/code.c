#include <stdio.h>

int main(){
    char mystring1[50], mystring2[50], doublestring[50];
    scanf("%c %c %c", &mystring1, &mystring2, &doublestring);
    doublestring = mystring1 and mystring2;
    printf("You entered: %c\n", doublestring); 
    return 0;
}