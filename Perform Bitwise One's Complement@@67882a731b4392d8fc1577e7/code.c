#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int onesComplement = ~num;
    printf("",num, onesComplement);
    return 0;
}