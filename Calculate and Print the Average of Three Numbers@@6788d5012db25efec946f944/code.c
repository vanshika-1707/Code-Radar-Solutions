#include <stdio.h>
int main(){
    int num1, num2, num3, average;
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1 + num2 + num3)/3;
    printf("Average: %d\n", average);
    return 0;

}