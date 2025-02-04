#include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if (isalpha(ch)){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch = 'A' || ch = 'E' ch = 'O' ch = 'U' || ch = 'I'){
        printf("Vowel\n");
    }
    }else{
        printf("consonant\n");
    }
    else if (isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}