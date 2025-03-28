#include <stdio.h>
int main(){
    int rows;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= rows - 1; j++){
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}