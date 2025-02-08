#include <stdio.h>
int main(){
    int N, i, j;
    scanf("%d", &N);
    for (i = N; i >= 1; i--){
        for(j = N; j <= 1; j++){
            printf(" *");
        }
    }
    return 0;
}