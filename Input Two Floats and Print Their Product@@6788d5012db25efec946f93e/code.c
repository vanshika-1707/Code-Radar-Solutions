#include <stdio.h>
int main(){
    float num1, num2, product;
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    printf("Product: %2.f", product);
    return 0;
}