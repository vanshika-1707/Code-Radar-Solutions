#include <stdio.h>
int main(){
    int num1, num2;
    char operator;
    scanf("%d %d", &num1, &num2);
    scanf("%c", &operator);
    if (operator == '+'){
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
    }
    else if (operator == '-'){
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
    }
    else if (operator == '*'){
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
    }
    else if (operator == '/'){
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
    }
    else{
        printf("Error\n");
    }
    return 0;
}