#include <stdio.h>
int main(){
    int num;
    int num_bits = sizeof(num) * 8;
    scanf("%d", &num);
    int msb = (num >> (num_bits - 1)) & 1;
    if (msb){
        printf("Set\n");
    }
    else{
        printf("Not Set\n");
    }
    return 0;
}