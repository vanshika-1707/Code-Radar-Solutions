#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int onesComplement = ~num;
    printf("one'sComplement of %d is: %d\n",num, onesComplement);
    return 0;
}